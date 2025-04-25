#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

enum class TokenType {
    KEYWORD,
    VALUE
};

struct Token{
    TokenType type;
};

class Lexer {

};
