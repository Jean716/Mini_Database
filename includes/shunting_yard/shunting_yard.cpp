#include "shunting_yard.h"
#include "../../includes/tokenizer/constants.h"
#include "../../includes/token/child_tokens.h"
#include "../../includes/token/token.h"


ShuntingYard::ShuntingYard(Queue<Token*>& input) : _infix(input) {
    cout << "-------ShuntingYard constructor FIred!-------" << endl;
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
    cout << "-------ShuntingYard::to_postfix Fired!-------" << endl;
    // cout << "Input Queue: " << input << endl;
    Queue<Token*> output;
    Stack<Token*> operators;

    while (!input.empty()) {
        Token* token = input.front();
        input.pop();

        // cout << "Current Token: " << token->value() << endl;

        if (token->type() == TOKEN_NUMBER || token->type() == TOKEN_STRING || token->type() == TOKEN_ALFA) {
            output.push(token);
            }
        else if (is_operator(token) || is_relational_operator(token) || is_logical_operator(token)) {
            while (!operators.empty() &&
                !is_left_paren(operators.top()) &&
                precedence(operators.top()) >= precedence(token)) {
                // cout << "Popping operator: " << operators.top()->value() << " from stack." << endl;

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

        // cout << "Operator Stack: ";
        Stack<Token*> temp_stack = operators;
        while (!temp_stack.empty()) {
            // cout << temp_stack.top()->value() << " ";
            temp_stack.pop();
            }
        cout << endl;

        // cout << "Output Queue: ";
        Queue<Token*> temp_output = output;
        while (!temp_output.empty()) {
            // cout << temp_output.front()->value() << " ";
            temp_output.pop();
            }
        cout << endl;
        }

    while (!operators.empty()) {
        if (is_left_paren(operators.top())) {
            cerr << "Error: Mismatched parentheses in expression" << endl;
            throw runtime_error("Mismatched parentheses");
            }
        output.push(operators.top());
        operators.pop();
        }

    cout << "Postfix expression generated: ";
    Queue<Token*> temp_output = output;
    while (!temp_output.empty()) {
        // cout << temp_output.front()->value() << " ";
        temp_output.pop();
        }
    cout << endl;

    return output;
    }


int ShuntingYard::precedence(Token* token) {
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
    else if (token->type() == TOKEN_LEFT_PAREN || token->type() == TOKEN_RIGHT_PAREN) {
        return 10; // Parentheses have the highest priority
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