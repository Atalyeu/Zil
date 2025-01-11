#pragma once
#include "syntax.h"
#include <string>
#include <vector>


typedef struct {
    groups_types_t type;
    std::string value;
    std::vector<std::string> parse_token(Token* token);
} Token;

std::vector<std::string> parse_token(Token* token);