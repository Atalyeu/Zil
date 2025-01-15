#include "syntax.h"
#include <string>

#define TABLE_SIZE (sizeof(keyword_map) / sizeof(keyword_map[0]))

token_type_t keyword_lookup(const keyword_t keyword_map[], const char* identifier, size_t table_size) {
    for (size_t i = 0; i < table_size; i++) {
        if (strcmp(keyword_map[i].keyword, identifier) == 0) {
            return keyword_map[i].type;
        }
    }
    return TOK_ILLEGAL;
}


