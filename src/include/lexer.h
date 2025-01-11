#pragma once

#include "syntax.h"
#include "token.h"

typedef struct {    
    char* code;
    groups_types_t types;
    Token tokens[];
} Lexer;
