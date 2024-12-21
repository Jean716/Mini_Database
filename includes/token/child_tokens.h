#ifndef CHILD_TOKENS_H
#define CHILD_TOKENS_H

#include "token.h"
#include "../../includes/tokenizer/constants.h" 
#include <iostream>
using namespace std;

class StringToken : public Token
    {
    public:
        StringToken(const string& value)
            : Token(value, STRING_TK) {
            }

        void print(ostream& outs) const override {
            //outs << "[" << _value << "]";
            outs << "StringToken: [" << _value << "]";
            }
    };

// class AlphaToken : public Token
//     {
//     public:
//         AlphaToken(const string& value)
//             : Token(value, ALPHA) {
//             }

//         void print(ostream& outs) const override {
//             outs << "AlphaToken:  [ " << _value << " ]";
//             }
//     };

class ALPHAToken : public Token
    {
    public:
        ALPHAToken(const string& value)
            : Token(value, ALPHA_TK) {
            }

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            //outs << "ALPHAToken:  [" << _value << "]";
            }
    };

class NumberToken : public Token
    {
    public:
        NumberToken(const string& value)
            : Token(value, NUMBER_TK) {
            }

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            // outs << "NumberToken:  [" << _value << "]";
            }
    };

class PuncToken : public Token
    {
    public:
        PuncToken(const string& value)
            : Token(value, PUNC_TK) {
            }
        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            // outs << "PuncToken:  [" << _value << "]";
            }
    };

class OperatorToken : public Token
    {
    public:
        OperatorToken(const string& value)
            : Token(value, OPERATOR_TK) {
            }

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            // outs << "OperatorToken:  [" << _value << "]";

            }
    };

class LogicalOperatorToken : public Token
    {
    public:
        LogicalOperatorToken(const string& value)
            : Token(value, LOGICAL_OP_TK) {
            }

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            //outs << "LogicalOperatorToken:  [" << _value << "]";
            }
    };

class RelationalOperatorToken : public Token
    {
    public:
        RelationalOperatorToken(const string& value)
            : Token(value, RELATIONAL_OP_TK) {
            }

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            //outs << "RelationalOperatorToken:  [" << _value << "]";
            }
    };


class AsteriskToken : public Token
    {
    public:
        AsteriskToken() : Token("*", STAR_TK) {}

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            //outs << "AsteriskToken:  [ " << _value << "]";
            }
    };

class CommaToken : public Token
    {
    public:
        CommaToken() : Token(",", COMMA_TK) {}

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            //outs << "CommaToken:  [ " << _value << "]";

            }
    };

class SpaceToken : public Token
    {
    public:
        SpaceToken()
            : Token(" ", UNKNOWN) {
            }

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            //outs << "SpaceToken:  [" << _value << "]";
            }
    };

class LeftParenToken : public Token
    {
    public:
        LeftParenToken() : Token("(", LEFT_PAREN_TK) {
            }

        void print(ostream& outs) const override {
            outs << "[" << _value << "]";
            // outs << "LeftParenToken:  [" << _value << "]";
            }
    };

class RightParenToken : public Token
    {
    public:
        RightParenToken() : Token(")", RIGHT_PAREN_TK) {
            }
        void print(ostream& outs) const override {
            outs << "RightParenToken:  [" << _value << "]";
            }
    };



#endif // CHILDTOKEN_H