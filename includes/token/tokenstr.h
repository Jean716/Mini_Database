// #ifndef TOKEN_STR_H
// #define TOKEN_STR_H

// #include "token.h"
// #include "../../includes/tokenizer/constants.h"
// using namespace std;


// class TokenStr : public Token
//     {
//     public:
//         TokenStr(const string& str) : _str(str) {}

//         int type() const override {
//             return TOKEN_STRING;
//             }

//         string value() const override {
//             return _str;
//             }

//         int precedence() const override {
//             return -1; // there is no precedence for string
//             }

//         void print(ostream& outs) const override {
//             outs << "[StringToken: Type = " << type() << ", Value = " << value() << "]";
//             }

//     private:
//         string _str;
//     };

// #endif // STRING_TOKEN_H