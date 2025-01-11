#pragma once
#include "syntax.h"

typedef struct {
    groups_types_t type;
    char* value;
} Token;

char** parse_token(Token* token);
