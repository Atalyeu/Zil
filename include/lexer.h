#pragma once

#include "syntax.h"
#include "token.h"
#include <cstddef>

typedef struct lexer_t {    
    char* input;
    size_t position;
    size_t cursor;
    char current;
} lexer_t;


// TODO: setup other helpful functions.
token_t next(lexer_t* self);