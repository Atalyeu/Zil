#ifndef LEXER_H
#define LEXER_H

#include <stddef.h>
#include <string.h>
#include "token.h"

typedef struct lexer_t {
    char* input;
    location_t loc;
    size_t cursor;
    char* current;
} lexer_t;


token_t* lexer_parser(lexer_t* self);

#endif // LEXER_H