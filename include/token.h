#ifndef TOKEN_H
#define TOKEN_H

#include <stddef.h>

typedef enum {
    TOK_UNKNOWN = 0,
    TOK_IDENTIFIER,

    // Types
    TOK_UNDEFINED, TOK_VOID, TOK_NULL, TOK_NUMBER, TOK_BIGINT, TOK_STRING, TOK_BOOL,

    // Punctuations
    TOK_SEMICOLON, TOK_LEFTPAREN, TOK_RIGHTPAREN, TOK_LEFTBRAC, TOK_RIGHTBRAC, TOK_RIGHTCBRAC, TOK_LEFTCBRAC,

    // Arithmetic Operators
    TOK_PLUS, TOK_MIN, TOK_MUL, TOK_DIV, TOK_INC, TOK_DEC, TOK_ASSIGN,

    // Logic Operators 
    TOK_AND, TOK_NOT, TOK_OR, TOK_EQU, TOK_TRIPLE_EQU,  TOK_NEQU, TOK_TRIPLE_NEQU, 
    TOK_GREATER, TOK_GREATER_OR_EQU, TOK_LOWER, TOK_LOWER_OR_EQU,

    // Bitwise Operators 
    TOK_B_NOT, TOK_B_AND, TOK_B_OR, TOK_B_XOR, TOK_RIGHT_SH, TOK_LEFT_SH,

    // Keywords
    TOK_CONST, TOK_LET, TOK_VAR, TOK_IF, TOK_ELSE, TOK_FOR, TOK_DO, TOK_WHILE, TOK_SWITCH, TOK_CASE, TOK_DEFAULT, TOK_BREAK, 
    TOK_CONTINUE, TOK_FUNCTION, TOK_NEW, TOK_CLASS, TOK_THIS, TOK_RETURN, TOK_IMPORT, TOK_EXPORT, TOK_PUBLIC, TOK_THROW, 
    TOK_TRY, TOK_CATCH, TOK_FINALLY, TOK_INSTANCEOF, TOK_ILLEGAL, 
    TOK_EOF, // Represents end of file token (tells interpreter when to stop.)
    
} token_type_t;

typedef struct location_t {
    size_t column;
    size_t row;
} location_t;

typedef struct {
    token_type_t type;
    char* value;        
    location_t location;
} token_t;

char** tokenize(const char* source_code);

#endif // TOKEN_H