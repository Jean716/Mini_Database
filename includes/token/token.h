#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include <iostream>
using namespace std;
enum TOKEN_TYPE
    {
    TOKEN_KEYWORD,
    TOKEN_NUMBER,

    TOKEN_STRING,
    TOKEN_SYMBOL,

    TOKEN_SPACE,
    TOKEN_COMMA,
    TOKEN_ASTERISK,
    TOKEN_SEMICOLON,
    TOKEN_DOT,

    TOKEN_QUOTE, // ‘"’
    TOKEN_LEFT_PAREN,
    TOKEN_RIGHT_PAREN,

    TOKEN_OPERATOR, // ‘+’, ‘-’, ‘*’, ‘/’
    TOKEN_RELATIONAL_OPERATOR, // =, !=, <, >, <=, >=
    TOKEN_LOGICAL_OPERATOR, // AND, OR，NOT

    TOKEN_PUNC,
    TOKEN_ALFA,
    };

class Token
    {
    public:
        Token(int type = -1, const   string& value = "") : _type(type), _value(value) {}
        virtual ~Token() {}
        virtual int type() const { return _type; }
        virtual string value() const { return _value; }
        virtual void print(ostream& outs) const = 0;
        virtual string type_string() const = 0;
        virtual int precedence() const { return -1; }
        friend ostream& operator<<(ostream& outs, const Token& token) {
            token.print(outs);
            return outs;
            }

    protected:
        int _type;
        string _value;

    };

#endif // TOKEN_H