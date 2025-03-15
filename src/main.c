#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "token.h"
#include "lexer.h"

static char* source_code = "let x = 10;";

int main() {
    printf("Source Code: %s \n", source_code);

    return 0;
}