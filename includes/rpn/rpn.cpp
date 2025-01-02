#include "rpn.h"
#include <string>
#include <sstream>
#include "../../includes/stl_utils/string_utilities.h"

vector<long> RPN::evaluate() {
    cout << "-------RPN evaluate started!-------" << endl;

    Stack<ResultSet> logical_stack;
    Stack<string> string_stack;
    Queue<Token *> temp_postfix = _postfix;

    while (!temp_postfix.empty()) {
        Token *token = temp_postfix.pop();

        switch (token->type()) {
                case TOKEN_ALFA:
                case TOKEN_STRING:
                {
                string_stack.push(token->value());
                break;
                }
                case TOKEN_NUMBER:
                {
                string_stack.push(token->value());
                break;
                }
                case TOKEN_RELATIONAL_OPERATOR:
                {
                if (string_stack.size() < 2) {
                    throw runtime_error("Insufficient operands for relational operator");
                    }

                string field_value = string_stack.pop();
                string field_name = string_stack.pop();

                bool result = evaluate_relational(token->value(), field_name, field_value);

                vectorlong matching_recnos = result ? vectorlong{ 1 } : vectorlong{};
                logical_stack.push(ResultSet(matching_recnos));
                break;
                }
                case TOKEN_LOGICAL_OPERATOR:
                {
                if (logical_stack.size() < 2) {
                    throw runtime_error("Invalid logical operation: Insufficient operands");
                    }

                ResultSet right_set = logical_stack.pop();
                ResultSet left_set = logical_stack.pop();

                vectorlong result = evaluate_logical(token->value(), left_set.get_recnos(), right_set.get_recnos());

                logical_stack.push(ResultSet(result));
                break;
                }
                case TOKEN_OPERATOR:
                {
                if (string_stack.size() < 2) {
                    throw runtime_error("Insufficient operands for arithmetic operation");
                    }

                long right = stol(string_stack.pop());
                long left = stol(string_stack.pop());

                long result = evaluate_arithmetic(token->value(), left, right);

                string_stack.push(to_string(result));
                break;
                }
                default:
                {
                throw runtime_error("Unsupported token type in RPN evaluate");
                }
            }
        }

    if (!logical_stack.empty()) {
        return logical_stack.pop().get_recnos();
        }

    throw runtime_error("Invalid RPN expression: No results");
    }

static bool is_number(const string &s) {
    return !s.empty() && find_if(s.begin(),
        s.end(), [] (char c)
        { return !(isdigit(c) || c == '.'); }) == s.end();
    }

static bool is_time(const string &s, long &time_stamp) {
    if (s.empty())
        return false;
    // get hour min sec from hh:mm:ss
    if (s.find(':') != string::npos) {
        int hour, min, sec = 0;
        char delimiter1, delimiter2;
        stringstream ss(s);
        ss >> hour >> delimiter1 >> min;
        if (ss.bad() || ss.fail()) {
            return false;
            }
        if (delimiter1 == ':') {
            if (ss.eof()) {
                sec = 0;
                time_stamp = hour * 3600 + min * 60 + sec;
                return true;
                }
            ss >> delimiter2 >> sec;
            if (delimiter2 != ':') {
                return false;
                }
            time_stamp = hour * 3600 + min * 60 + sec;
            return true;
            }
        return false;
        }
    return false;
    }

long RPN::evaluate_arithmetic(const string &op, long left, long right) {
    if (op == "+")
        return left + right;
    if (op == "-")
        return left - right;
    if (op == "*")
        return left * right;
    if (op == "/") {
        if (right == 0)
            throw runtime_error("Division by zero");
        return left / right;
        }
    throw runtime_error("Unknown arithmetic operator: " + op);
    }


bool RPN::evaluate_relational(const string &op, const string &left, const string &right) {
    string left_trimmed = left;
    string right_trimmed = right;

    remove_all_spaces(left_trimmed);
    remove_all_spaces(right_trimmed);

    // number
    if (!left_trimmed.empty() && !right_trimmed.empty() &&
        is_number(left_trimmed) &&
        is_number(right_trimmed)) {
        try {
            double left_num = stod(left_trimmed);
            double right_num = stod(right_trimmed);
            if (op == "=")
                return left_num == right_num;
            if (op == "!=")
                return left_num != right_num;
            if (op == "<")
                return left_num < right_num;
            if (op == ">")
                return left_num > right_num;
            if (op == "<=")
                return left_num <= right_num;
            if (op == ">=")
                return left_num >= right_num;
            }
        catch (const invalid_argument &e) {
            throw runtime_error("Invalid number format: " + left_trimmed + ", " + right_trimmed);
            }
        }

    // time
    long left_time = 0, right_time = 0;
    if (!left_trimmed.empty() && !right_trimmed.empty() &&
        is_time(left_trimmed, left_time) &&
        is_time(right_trimmed, right_time)) {
        try {
            long left_num = left_time;
            long right_num = right_time;
            if (op == "=")
                return left_num == right_num;
            if (op == "!=")
                return left_num != right_num;
            if (op == "<")
                return left_num < right_num;
            if (op == ">")
                return left_num > right_num;
            if (op == "<=")
                return left_num <= right_num;
            if (op == ">=")
                return left_num >= right_num;
            }
        catch (const invalid_argument &e) {
            throw runtime_error("Invalid number format: " + left_trimmed + ", " + right_trimmed);
            }
        }

    // string
    if (op == "=")
        return left_trimmed == right_trimmed;
    if (op == "!=")
        return left_trimmed != right_trimmed;
    if (op == "<")
        return left_trimmed < right_trimmed;
    if (op == ">")
        return left_trimmed > right_trimmed;
    if (op == "<=")
        return left_trimmed <= right_trimmed;
    if (op == ">=")
        return left_trimmed >= right_trimmed;

    throw runtime_error("Unknown relational operator: " + op);
    }

vector<long> RPN::evaluate_logical(const string & op, const vector<long> &left_set, const vector<long> &right_set) {
    ResultSet result(left_set);
    if (op == "and" || op == "AND") {
        result.and_with(right_set);
        }
    else if (op == "or" || op == "OR") {
        result.or_with(right_set);
        }
    else {
        throw runtime_error("Unknown logical operator: " + op);
        }
    return result.get_recnos();
    }
