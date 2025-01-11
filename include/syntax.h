#pragma once

typedef enum {

    // Data Types tokens
    TOK_UNDEFINED,
    TOK_VOID,
    TOK_NULL,
    TOK_NUMBER,
    TOK_BIGINT,
    TOK_STRING,
    TOK_BOOL,

    // Punctuation tokens
    TOK_SEMICOLON, // ;
    TOK_LEFTPAREN, // (
    TOK_RIGHTPAREN, // )
    TOK_LEFTBRAC, // [
    TOK_RIGHTBRAC, // ]
    TOK_RIGHTCBRAC, // {
    TOK_LEFTCBRAC, // }

    TOK_IDENTIFIER,

    // Arithamtic Operators
    TOK_PLUS,
    TOK_MIN,
    TOK_MUL,
    TOK_DIV,
    TOK_INC,
    TOK_DEC,
    TOK_POWER,
    TOK_ASSIGN,

    // Logic Operators
    TOK_AND,
    TOK_NOT,
    TOK_OR,
    TOK_EQU, // == only value
    TOK_TRIPLE_EQU, // === value & type
    TOK_NEQU,
    TOK_GREATER,
    TOK_GREATER_OR_EQU,
    TOK_LOWER,
    TOK_LOWER_OR_EQU,

    // Bitwise Operators
    TOK_B_NOT,
    TOK_B_AND,
    TOK_B_OR,
    TOK_XOR,
    TOK_RIGHT_SH,
    TOK_LEFT_SH,

    // Keywords
    TOK_CONST,
    TOK_LET,
    TOK_VAR,
    TOK_IF,
    TOK_ELSE,
    TOK_ELSE_IF,
    TOK_FOR,
    TOK_DO,
    TOK_WHILE,
    TOK_SWITCH,
    TOK_CASE,
    TOK_DEFAULT,
    TOK_BREAK,
    TOK_CONTINUE,
    TOK_FUNCTION,
    TOK_NEW,
    TOK_CLASS,
    TOK_THIS,
    TOK_RETURN,
    TOK_IMPORT,
    TOK_EXPORT,
    TOK_PUBLIC,
    TOK_THROW,
    TOK_TRY,
    TOK_CATCH,
    TOK_FINALLY,
    TOK_ININSTANCEOF,
    TOK_ILLEGAL,
    TOK_EOF // Represents end of file token (tells interpreter when to stop.)

} token_type_t;

