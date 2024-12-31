#include "rpn.h"
vector<long> RPN::evaluate() {
    cout << "-------RPN evaluate started!-------" << endl;

    Stack<ResultSet> logical_stack;
    Stack<string> string_stack;
    Queue<Token*> temp_postfix = _postfix;

    while (!temp_postfix.empty()) {
        Token* token = temp_postfix.pop();

        switch (token->type()) {
                case TOKEN_ALFA:
                case TOKEN_STRING: {
                string_stack.push(token->value());
                break;
                }
                case TOKEN_NUMBER: {
                string_stack.push(token->value());
                break;
                }
                case TOKEN_RELATIONAL_OPERATOR: {
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
                case TOKEN_LOGICAL_OPERATOR: {
                if (logical_stack.size() < 2) {
                    throw runtime_error("Invalid logical operation: Insufficient operands");
                    }

                ResultSet right_set = logical_stack.pop();
                ResultSet left_set = logical_stack.pop();

                vectorlong result = evaluate_logical(token->value(), left_set.get_recnos(), right_set.get_recnos());

                logical_stack.push(ResultSet(result));
                break;
                }
                case TOKEN_OPERATOR: {
                if (string_stack.size() < 2) {
                    throw runtime_error("Insufficient operands for arithmetic operation");
                    }

                long right = stol(string_stack.pop());
                long left = stol(string_stack.pop());

                long result = evaluate_arithmetic(token->value(), left, right);

                string_stack.push(to_string(result));
                break;
                }
                default: {
                throw runtime_error("Unsupported token type in RPN evaluate");
                }
            }
        }

    if (!logical_stack.empty()) {
        return logical_stack.pop().get_recnos();
        }

    throw runtime_error("Invalid RPN expression: No results");
    }

long RPN::evaluate_arithmetic(const string& op, long left, long right) {
    if (op == "+") return left + right;
    if (op == "-") return left - right;
    if (op == "*") return left * right;
    if (op == "/") {
        if (right == 0) throw runtime_error("Division by zero");
        return left / right;
        }
    throw runtime_error("Unknown arithmetic operator: " + op);
    }

bool RPN::evaluate_relational(const string& op, const string& left, const string& right) {
    // cout << "-------RPN evaluate_relational started!-------" << endl;
    bool left_is_numeric = is_number(left);
    bool right_is_numeric = is_number(right);

    // cout << "  Operator: " << op << ", Left: " << left << ", Right: " << right << endl;
    // cout << "  Left Is Numeric: " << (left_is_numeric ? "true" : "false") << endl;
    // cout << "  Right Is Numeric: " << (right_is_numeric ? "true" : "false") << endl;

// Case 1: Both operands are numeric
    if (left_is_numeric && right_is_numeric) {
        long left_num = stol(left);
        long right_num = stol(right);

        if (op == "=") return left_num == right_num;
        if (op == "!=") return left_num != right_num;
        if (op == "<") return left_num < right_num;
        if (op == ">") return left_num > right_num;
        if (op == "<=") return left_num <= right_num;
        if (op == ">=") return left_num >= right_num;
        }

    // Case 2: Both operands are non-numeric
    if (!left_is_numeric && !right_is_numeric) {
        if (op == "=") return left == right;
        if (op == "!=") return left != right;
        if (op == "<") return left < right;
        if (op == ">") return left > right;
        if (op == "<=") return left <= right;
        if (op == ">=") return left >= right;
        }

    // Case 3: Mismatched types (numeric vs. non-numeric)
    cout << "  Error: Mismatched operand types (numeric vs. non-numeric)." << endl;
    return false; // Treat mismatched types as non-matching
    }

vector<long> RPN::evaluate_logical(const string& op, const vector<long>& left_set, const vector<long>& right_set) {
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
