#ifndef TOKEN_H
#define TOKEN_H
#include <iostream>
using namespace std;

class Token
    {
    public:
        enum TokenType
            {
            STRING_TK,
            ALPHA_TK,
            PUNC_TK,
            NUMBER_TK,
            OPERATOR_TK,
            RELATIONAL_OP_TK,
            LOGICAL_OP_TK,
            SPACE_TK,
            LEFT_PAREN_TK,
            RIGHT_PAREN_TK,
            STAR_TK,
            COMMA_TK,

            KEYWORDS_TK,
            IDENTIFIER_TK,
            UNKNOWN

            };

        Token(const string& value, TokenType type) : _value(value), _type(type) {}
        virtual ~Token() = default;

        string getValue() const { return _value; }
        TokenType getType() const { return _type; }

        // virtural functions: must be implemented by derived classes
        virtual void print(ostream& outs) const = 0;

        //overload the << operator
        friend ostream& operator<<(ostream& outs, const Token& token) {
            token.print(outs);
            return outs;
            }

    protected:
        TokenType _type;
        string _value;

    };

#endif // TOKEN_H