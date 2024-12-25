#include "shunting_yard.h"
#include "../../includes/tokenizer/constants.h"
#include "../../includes/token/child_tokens.h"
#include "../../includes/token/token.h"


ShuntingYard::ShuntingYard(Queue<Token*>& input) : _infix(input) {
    //cout << "-------ShuntingYard constructor FIred!-------" << endl;
    // Clear _infix to ensure it's empty before copying
    while (!_infix.empty()) {
        _infix.pop();
        }

    // Copy each element from input to _infix
    Queue<Token*> temp_input = input; // Use a temporary queue to preserve input
    while (!temp_input.empty()) {
        Token* token = temp_input.front();
        temp_input.pop();
        _infix.push(token); // Push into _infix
        }

    }
Queue<Token*> ShuntingYard::postfix(Queue<Token*>& input) {
    //cout << "-------ShuntingYard::to_postfix Fired!-------" << endl;
    // cout << "Input Queue: " << input << endl;
    Queue<Token*> output;
    Stack<Token*> operators;

    while (!input.empty()) {
        Token* token = input.front();
        input.pop();

        //cout << "Current Token:--------------> " << token->value() << endl;

        if (token->type() == TOKEN_NUMBER || token->type() == TOKEN_STRING || token->type() == TOKEN_ALFA) {
            //cout << "is string or number" << endl;
            output.push(token);
            //cout << "Pushing token: " << token->value() << " to output queue." << endl;
            }
        else if (is_operator(token) || is_relational_operator(token) || is_logical_operator(token)) {
            //cout << "is operator" << endl;
            while (!operators.empty() &&
                !is_left_paren(operators.top()) &&
                precedence(operators.top()) >= precedence(token)) {
                //cout << "Popping operator: " << operators.top()->value() << " from stack." << endl;

                output.push(operators.top());
                operators.pop();
                }
            //cout << "Pushing operator: " << token->value() << " to stack." << endl;
            operators.push(token);
            }
        else if (is_left_paren(token)) {
            operators.push(token);
            }
        else if (is_right_paren(token)) {
            while (!operators.empty() && !is_left_paren(operators.top())) {
                output.push(operators.top());
                operators.pop();
                }

            if (!operators.empty() && is_left_paren(operators.top())) {

                operators.pop();
                //cout << "Popped left paren from stack." << endl;
                }
            else {
                cerr << "Error: Mismatched parentheses in expression" << endl;
                throw runtime_error("Mismatched parentheses");
                }
            }
        else {
            cerr << "Error: Invalid token: " << token->value() << endl;
            throw runtime_error("Invalid token in expression");
            }


        }

    while (!operators.empty() && !is_left_paren(operators.top())) {

        output.push(operators.top());
        operators.pop();
        }

    return output;

    }


int ShuntingYard::precedence(Token * token) {
    if (token->type() == TOKEN_OPERATOR) {
        string op = token->value();
        if (op == "*" || op == "/") return 6;  // Highest priority
        if (op == "+" || op == "-") return 5;
        }
    else if (token->type() == TOKEN_RELATIONAL_OPERATOR) {
        return 4; // Relational operators: <, <=, >, >=, ==, !=
        }
    else if (token->type() == TOKEN_LOGICAL_OPERATOR) {
        string op = token->value();
        if (op == "not") return 3; // Highest priority
        if (op == "and") return 2; // Lowest priority
        if (op == "or") return 1; // Lower than &&
        }

    return -1; // Unknown token type
    }



bool ShuntingYard::is_left_paren(Token * token) {
    return token->type() == TOKEN_LEFT_PAREN && token->value() == "(";
    }

bool ShuntingYard::is_right_paren(Token * token) {
    return token->type() == TOKEN_RIGHT_PAREN && token->value() == ")";
    }

bool ShuntingYard::is_operator(Token * token) {
    string op = token->value();
    return (token->type() == TOKEN_OPERATOR &&
        (op == "+" || op == "-" || op == "*" || op == "/"));
    }

bool ShuntingYard::is_relational_operator(Token * token) {
    string op = token->value();
    return token->type() == TOKEN_RELATIONAL_OPERATOR &&
        (op == "<" || op == "<=" || op == ">" || op == ">=" || op == "=" || op == "!=");
    }

bool ShuntingYard::is_logical_operator(Token * token) {
    string op = token->value();
    return token->type() == TOKEN_LOGICAL_OPERATOR &&
        (op == "and" || op == "or" || op == "not");
    }
