#pragma once

typedef enum {
    // Punctuation tokens
    TOK_SEMICOLON, // ;
    TOK_LEFTPAREN, // (
    TOK_RIGHTPAREN, // )
    TOK_LEFTBRAC, // [
    TOK_RIGHTBRAC, // ]

    TOK_IDENTIFIER,

    // Arithamtic Operators
    TOK_PLUS,
    TOK_MIN,
    TOK_MUL,
    TOK_DIV,
    TOK_INC,
    TOK_DEC,
    TOK_ASSIGN,

    // Logic Operators
    TOK_AND,
    TOK_NOT,
    TOK_OR,
    TOK_EQU,
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
    TOK_IF,
    TOK_ELSE,
    TOK_FOR,
    TOK_WHILE,
    TOK_BREAK,
    TOK_CONTINUE,
    TOK_FUNC,

    TOK_ILLEGAL,
    TOK_EOF // Represents end of file token (tells interpreter when to stop.)
} token_type_t;

