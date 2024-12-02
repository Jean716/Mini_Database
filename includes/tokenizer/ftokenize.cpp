// #include "../../includes/tokenizer/ftokenize.h"
// #include "../../includes/token/token.h"
// #include "../../includes/tokenizer/constants.h"
// #include "../../includes/tokenizer/state_machine_functions.h"
// #include "../../includes/tokenizer/stokenize.h" 
// #include <cstring>// for std::strcpy
// #include <iostream>
// #include <istream> // for gcount(),peek(),etc.
// using namespace std;



// // Constructor
// FTokenizer::FTokenizer(const char* fname) : _pos(0), _blockPos(0), _more(true) {
//     _f.open(fname);
//     if (!_f) {
//         std::cerr << "Error: File '" << fname << "' could not be opened!" << std::endl;
//         _more = false;
//         }
//     else {
//         std::cout << "File '" << fname << "' opened successfully." << std::endl;
//         }
//     }

// // Fetches a new block of data from the file
// bool FTokenizer::get_new_block() {
//     if (!_f || !_f.good()) {
//         _more = false;
//         return false;
//         }

//     // Read a block of data
//     _f.read(_block, MAX_BLOCK - 1);  // Reserve space for '\0'
//     int bytesRead = _f.gcount();     // Get the actual number of characters read

//     // If no data was read, return false indicating end of file
//     if (bytesRead == 0) {
//         _more = false;
//         return false;
//         }

//     // Null-terminate the block
//     _block[bytesRead] = '\0';

//     // Print the content of the block (for debugging purposes)
//     std::cout << "Block read: " << _block << std::endl;

//     // Set the block as the new input for the tokenizer
//     _stk.set_string(_block);  // Send the block to the tokenizer

//     // Return true indicating a new block was successfully loaded
//     return true;
//     }
// // Returns the next token
// Token FTokenizer::next_token() {
//     Token t;

//     // Check if the current block still has more tokens to extract
//     if (!_stk.more()) {
//         // If no more tokens in the current block, load a new block
//         if (!get_new_block()) {
//             _more = false;  // No more blocks, end of file reached
//             return Token();  // Return an empty token
//             }
//         }

//     // Extract the next token from the current block
//     _stk >> t;

//     // Update positions
//     _pos++;
//     _blockPos += t.token_str().size();

//     return t;
//     }


// // Returns whether there are more tokens available
// bool FTokenizer::more() {
//     return _more || _stk.more(); // There are more tokens if STokenizer has more or if the file has more.
//     }

// // Returns the current position in the file
// int FTokenizer::pos() {
//     return _pos;
//     }

// // Returns the current position in the block
// int FTokenizer::block_pos() {
//     return _blockPos;
//     }

// // Friend function for stream extraction operator
// FTokenizer& operator >> (FTokenizer& f, Token& t) {
//     t = f.next_token();
//     return f;
//     }