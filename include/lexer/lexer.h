#pragma once

#include "syntax.h"
#include "token.h"
#include <stddef.h>
#include <string.h>

#define TABLE_SIZE(keyword_map) (sizeof(keyword_map) / sizeof(keyword_map[0]))

typedef struct lexer_t {
    char* input;
    size_t position;
    size_t cursor;
    char current;
} lexer_t;

token_type_t keyword_lookup(const keyword_t keyword_map[], const char* identifier, size_t table_size);

// TODO: setup other helpful functions.
token_t next(lexer_t* self);
