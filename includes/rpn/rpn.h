#ifndef RPN_H
#define RPN_H
#include "../../includes/table/table.h"
#include "../../includes/queue/MyQueue.h"
#include "../../includes/stack/MyStack.h"
#include "../../includes/rpn/resultset.h"
#include "../../includes/token/token.h"
#include "../../includes/token/child_tokens.h"
#include <vector>

class RPN
    {
    public:
        RPN() {}
        RPN(const Queue<Token*>& input) : _postfix(input) {}

        void set_input(Queue<Token*>& input) {
            _postfix = input;
            }
        vector<long> evaluate();

        long evaluate_arithmetic(const string& op, long left, long right);
        bool evaluate_relational(const string& op, const string& left, const string& right);
        vector<long> evaluate_logical(const string& op, const vector<long>& left_set, const vector<long>& right_set);


    private:
        Queue<Token*> _postfix;

    };


#endif // RPN_H
