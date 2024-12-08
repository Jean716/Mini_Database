#ifndef CHILD_TOKENS_H
#define CHILD_TOKENS_H

#include "token.h"
#include "../../includes/tokenizer/constants.h" 
#include <string>
#include <iostream>
using namespace std;

class KeywordToken : public Token
    {
    public:
        KeywordToken(const string& keyword) : Token(TOKEN_KEYWORD, keyword) {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "KEYWORD"; }
        void print(ostream& outs) const override {
            outs << "[Keyword: " << value() << "]";
            }
    };

class NumberToken : public Token
    {
    public:
        NumberToken(const string& number) : Token(TOKEN_NUMBER, number) {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "NUMBER"; }
        void print(ostream& outs) const override {
            outs << "[Number: " << value() << "]";
            }
    };

class StringToken : public Token
    {
    public:
        StringToken(const string& str) : Token(TOKEN_STRING, str) {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "STRING"; }
        void print(ostream& outs) const override {
            outs << "[String: " << value() << "]";
            }
    };

class SymbolToken : public Token
    {
    public:
        SymbolToken(const string& symbol) : Token(TOKEN_SYMBOL, symbol) {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "SYMBOL"; }
        void print(ostream& outs) const override {
            outs << "[Symbol: " << value() << "]";
            }
    };

class SpaceToken : public Token
    {
    public:
        SpaceToken() : Token(TOKEN_SPACE, " ") {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "SPACE"; }
        void print(ostream& outs) const override {
            outs << "[Space]";
            }
    };

class CommaToken : public Token
    {
    public:
        CommaToken() : Token(TOKEN_COMMA, ",") {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "COMMA"; }
        void print(ostream& outs) const override {
            outs << "[Comma: ,]";
            }
    };

class AsteriskToken : public Token
    {
    public:
        AsteriskToken() : Token(TOKEN_ASTERISK, "*") {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "ASTERISK"; }
        void print(ostream& outs) const override {
            outs << "[Asterisk: *]";
            }
    };

// 分号 Token
// class SemicolonToken : public Token
//     {
//     public:
//         SemicolonToken() : Token(TOKEN_SEMICOLON, ";") {}
//         int type() const override { return _type; }
//         string value() const override { return _value; }
//         string type_string() const override { return "SEMICOLON"; }
//         void print(ostream& outs) const override {
//             outs << "[Semicolon: ;]";
//             }
//     };


// class DotToken : public Token
//     {
//     public:
//         DotToken() : Token(TOKEN_DOT, ".") {}
//         int type() const override { return _type; }
//         string value() const override { return _value; }
//         string type_string() const override { return "DOT"; }
//         void print(ostream& outs) const override {
//             outs << "[Dot: .]";
//             }
//     };

class QuoteToken : public Token
    {
    public:
        QuoteToken(const string& quote) : Token(TOKEN_QUOTE, quote) {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "QUOTE"; }
        void print(ostream& outs) const override {
            outs << "[Quote: " << value() << "]";
            }
    };

// Left ( Token
class LeftParenToken : public Token
    {
    public:
        LeftParenToken() : Token(TOKEN_LEFT_PAREN, "(") {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "LEFT_PAREN"; }
        int precedence() const override { return 1000; } // 最高优先级

        void print(ostream& outs) const override {
            outs << "[LeftParen: (]";
            }
    };

// right ) Token
class RightParenToken : public Token
    {
    public:
        RightParenToken() : Token(TOKEN_RIGHT_PAREN, ")") {}
        int type() const override { return _type; }
        string value() const override { return _value; }
        string type_string() const override { return "RIGHT_PAREN"; }
        int precedence() const override { return 1000; } // 最高优先级

        void print(ostream& outs) const override {
            outs << "[RightParen: )]";
            }
    };

// operator Token
// class OperatorToken : public Token
//     {
//     public:
//         OperatorToken(const string& op) : Token(TOKEN_OPERATOR, op) {}

//         int precedence() const override {
//             if (_value == "*" || _value == "/" || _value == "%") return 4;
//             if (_value == "+" || _value == "-") return 3;
//             return -1;
//             }

//         int type() const override { return TOKEN_OPERATOR; }
//         string value() const override {
//             if (_value == "+") return "PLUS";
//             if (_value == "-") return "MINUS";
//             if (_value == "*") return "MULTIPLY";
//             if (_value == "/") return "DIVIDE";
//             if (_value == "%") return "MODULO";
//             return "UNKNOWN_OPERATOR";
//             }
//         string type_string() const override { return "OPERATOR"; }
//         void print(ostream& outs) const override {
//             outs << "[Operator: " << value() << "]";
//             }
//     };

// relational operator Token
class RelationalOperatorToken : public Token
    {
    public:
        RelationalOperatorToken(const string& op) : Token(TOKEN_RELATIONAL_OPERATOR, op) {}

        int type() const override { return TOKEN_RELATIONAL_OPERATOR; } // 返回具体的类型

        string value() const override {
            if (_value == "=") return "=";
            if (_value == "!=") return "!=";
            if (_value == ">") return ">";
            if (_value == "<") return "<";
            if (_value == ">=") return ">=";
            if (_value == "<=") return "<=";
            return "UNKNOWN_RELATIONAL_OPERATOR";
            }

        int precedence() const override { return 2; }

        string type_string() const override {
            return "RELATIONAL_OPERATOR";
            }
        void print(ostream& outs) const override {
            outs << "[RelationalOperator: " << value() << "]";
            }
    };

// logical operator Token
class LogicalOperatorToken : public Token
    {
    public:
        LogicalOperatorToken(const string& op) : Token(TOKEN_LOGICAL_OPERATOR, op) {}

        int type() const override { return TOKEN_LOGICAL_OPERATOR; }

        string value() const override {
            if (_value == "and") return "and";
            if (_value == "or") return "or";
            if (_value == "not") return "not";
            return "UNKNOWN_LOGICAL_OPERATOR";
            }
        int precedence() const override {
            if (_value == "and") return 1;
            if (_value == "or") return 0;
            if (_value == "not") return 3; // not 通常最高优先级

            return -1;
            }

        string type_string() const override { return "LOGICAL_OPERATOR"; }
        void print(ostream& outs) const override {
            outs << "[LogicalOperator: " << value() << "]";
            }
    };

class ALFAToken : public Token
    {
    public:
        ALFAToken(const string& identifier) : Token(TOKEN_ALFA, identifier) {} // 使用 TOKEN_SYMBOL 类型
        int type() const override { return TOKEN_ALFA; }
        string value() const override { return _value; }
        string type_string() const override { return "ALFA"; }
        void print(ostream& outs) const override {
            outs << "[ALFA: " << value() << "]";
            }
    };

class PuncToken : public Token
    {
    public:
        PuncToken(const string& punctuation) : Token(TOKEN_PUNC, punctuation) {} // 使用 TOKEN_SYMBOL 类型
        int type() const override { return TOKEN_PUNC; }
        string value() const override { return _value; }
        string type_string() const override { return "PUNC"; }
        void print(ostream& outs) const override {
            outs << "[Punc: " << value() << "]";
            }
    };
#endif // CHILDTOKEN_H