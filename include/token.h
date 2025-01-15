#pragma once

#include "syntax.h"
#include <cstddef>

typedef struct location_t {
    size_t column;
    size_t row;
} location_t;

typedef struct token_t {
    token_type_t type;
    location_t loc;
    char* value;
} token_t;

// unnecessary for now.
//char** parse_token(Token* token);
