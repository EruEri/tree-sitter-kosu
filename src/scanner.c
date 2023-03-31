#include <stdbool.h>
#include <stdint.h>
#include <tree_sitter/parser.h>
#include <stdio.h>

enum TokenType {
    STRINGL
};

#define log_current() \
    printf("pos = %d, c = %c, code : %d\n", lexer->get_column(lexer), lexer->lookahead, lexer->lookahead)

static void advance(TSLexer* lexer) {
    lexer->advance(lexer, false);
}

static bool is_eof(TSLexer* lexer) {
    return lexer->eof(lexer);
}

static bool check_char(TSLexer* lexer, char c, bool advance_if_checked) {
    if (is_eof(lexer)) { return false; }
    bool match = lexer->lookahead == c;

    if (advance_if_checked) advance(lexer);

    return match;
}

static bool parse_stringl(TSLexer* lexer) {
    bool parsed = false;

    while (true) {
        if (check_char(lexer, '\"',false)) { break; }
        else if ( is_eof(lexer) ) { return false; }
        parsed = true;
        advance(lexer);
    }
    return parsed;
}

void* tree_sitter_Kosu_external_scanner_create() { return NULL;}
void tree_sitter_Kosu_external_scanner_destroy(void *payload) { }
unsigned tree_sitter_Kosu_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_Kosu_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) { }

bool tree_sitter_Kosu_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
    if ( valid_symbols[STRINGL] ) {
        return parse_stringl(lexer);
    }
    return false;
}
