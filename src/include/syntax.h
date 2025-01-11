#pragma once

typedef enum {
    VAR_TYPES = 0, // Referencing `variable_types_t`
    MATH_OPERATORS = 1, // Referencing `math_operators_t`
    COMPARISON_OPERATORS = 2, // Referencing `comparison_operator_t`
    KEYWORDS = 3, // Referencing `keywords_t`
    DECL_KEYWORDS = 4, // Referencing `decl_keywords_t`'
    COUNT,
} groups_types_t;

typedef enum {
    INTEGER,
    FLOAT,
    CHAR,
    STRING,
    BOOLEAN,
    NULL_TYPE,
    VOID,
    UNDERFINED, 
    COUNT,
} variable_types_t;

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    MODULUS,
    POWER,
    SQUARE_ROOT,
    FACTORIAL,
    COUNT,
} math_operators_t;

typedef enum {
    ASSIGNMENT,
    EQUALS,
    NOT_EQUALS,
    LESS_THAN,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN,
    GREATER_THAN_OR_EQUAL,
    LOGICAL_AND,
    LOGICAL_OR,
    LOGICAL_NOT,
    BITWISE_AND,
    BITWISE_OR,
    BITWISE_XOR,
    BITWISE_NOT,
    BITWISE_LEFT_SHIFT,
    BITWISE_RIGHT_SHIFT,
    CONDITIONAL_EXPRESSION,
    COUNT,
} comparison_operator_t;

typedef enum {
    IF,
    ELSE,
    SWITCH,
    CASE,
    DEFAULT,
    WHILE,
    FOR,
    DO_WHILE,
    CONTINUE,
    BREAK,
    RETURN,
    COUNT,
} keywords_t;

typedef enum {
    CONST,
    STATIC,
    VIRTUAL,
    EXPLICIT,
    OVERRIDE,
    FINAL,
    COUNT,
} decl_keywords_t;
