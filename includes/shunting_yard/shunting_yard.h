#ifndef SHUNTING_YARD_H
#define SHUNTING_YARD_H

#include <iostream>
#include <string>
#include "../../includes/queue/MyQueue.h"
#include "../../includes/stack/MyStack.h"
#include "../../includes/token/token.h"
#include "../../includes/token/child_tokens.h"

class ShuntingYard
    {
    public:
        ShuntingYard(Queue<Token*>& input);
        Queue<Token*> to_postfix() { return postfix(_infix); }
        Queue<Token*> postfix(Queue<Token*>& input);

    private:
        Queue<Token*> _infix;
        Stack<Token*> _operator_stack;

        int precedence(Token* token);
        bool is_left_paren(Token* token);
        bool is_right_paren(Token* token);
        bool is_operator(Token* token);
        bool is_relational_operator(Token* token);
        bool is_logical_operator(Token* token);
    };

#endif // SHUNTING_YARD_H