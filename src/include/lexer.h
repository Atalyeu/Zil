#pragma once
#include "syntax.h"
#include "token.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>



typedef struct {    
    std::string code;
    groups_types_t types;
    std::vector<Token> tokens;
} Lexer;

