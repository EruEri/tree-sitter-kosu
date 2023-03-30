#include <stdbool.h>
#include <stdint.h>
#include <tree_sitter/parser.h>
#include <stdio.h>

enum TokenType {
    STRINGL
};

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
    if (is_eof(lexer)) { return false; }

    int32_t head = lexer->lookahead;
    if (head != '\"') { return false; }
    
    while ( !( is_eof(lexer) || parsed ) ) {

        advance(lexer);
        bool is_escaped = check_char(lexer, '\\', false);
        if (is_eof(lexer)) { return false; }
        if (is_escaped) {
            advance(lexer);
        } else {
            bool matched = check_char(lexer, '\"', true);
            parsed = matched;
        }
    }

    if (parsed) {
        lexer->result_symbol = STRINGL;
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
