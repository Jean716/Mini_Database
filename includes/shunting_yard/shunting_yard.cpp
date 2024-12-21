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

        cout << "Current Token:--------------> " << token->getValue() << endl;

        if (token->getType() == Token::NUMBER_TK || token->getType() == Token::STRING_TK || token->getType() == Token::ALPHA_TK) {
            cout << "is string or number" << endl;
            output.push(token);
            cout << "Pushing token: " << token->getValue() << " to output queue." << endl;
            }
        else if (is_operator(token) || is_relational_operator(token) || is_logical_operator(token)) {
            cout << "is operator" << endl;
            while (!operators.empty() &&
                !is_left_paren(operators.top()) &&
                precedence(operators.top()) >= precedence(token)) {
                cout << "Popping operator: " << operators.top()->getValue() << " from stack." << endl;

                output.push(operators.top());
                operators.pop();
                }
            cout << "Pushing operator: " << token->getValue() << " to stack." << endl;
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
                cout << "Popped left paren from stack." << endl;
                }
            else {
                cerr << "Error: Mismatched parentheses in expression" << endl;
                throw runtime_error("Mismatched parentheses");
                }
            }
        else {
            cerr << "Error: Invalid token: " << token->getValue() << endl;
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
    if (token->getType() == Token::OPERATOR_TK) {
        string op = token->getValue();
        if (op == "*" || op == "/") return 6;  // Highest priority
        if (op == "+" || op == "-") return 5;
        }
    else if (token->getType() == Token::RELATIONAL_OP_TK) {
        return 4; // Relational operators: <, <=, >, >=, ==, !=
        }
    else if (token->getType() == Token::LOGICAL_OP_TK) {
        string op = token->getValue();
        if (op == "not") return 3; // Highest priority
        if (op == "and") return 2; // Lowest priority
        if (op == "or") return 1; // Lower than &&
        }

    return -1; // Unknown token type
    }



bool ShuntingYard::is_left_paren(Token * token) {
    return token->getType() == Token::LEFT_PAREN_TK && token->getValue() == "(";
    }

bool ShuntingYard::is_right_paren(Token * token) {
    return token->getType() == Token::RIGHT_PAREN_TK && token->getValue() == ")";
    }

bool ShuntingYard::is_operator(Token * token) {
    string op = token->getValue();
    return (token->getType() == Token::OPERATOR_TK &&
        (op == "+" || op == "-" || op == "*" || op == "/"));
    }

bool ShuntingYard::is_relational_operator(Token * token) {
    string op = token->getValue();
    return token->getType() == Token::RELATIONAL_OP_TK &&
        (op == "<" || op == "<=" || op == ">" || op == ">=" || op == "=" || op == "!=");
    }

bool ShuntingYard::is_logical_operator(Token * token) {
    string op = token->getValue();
    return token->getType() == Token::LOGICAL_OP_TK &&
        (op == "and" || op == "or" || op == "not");
    }
