#pragma once

#include <string>

enum class TokenType {
    Keyword,
    Value,
    Eof,
};

struct Loc {
    int line;
    int column;
}

struct Token{
    TokenType type;
    std::string value;
    Loc loc;
};

class Lexer {
public:
    explicit Lexer(const std::vector<std::string>& lines);

    Token next();
    bool isFinished() const;

private:
    std::vector<std::string> lines;
    Loc loc;

    char peek() const;
    char get();
    void skipWhitespaces();
    bool isEol() const;
    bool isAtEnd() const;

    bool isKeyword(const std::string& word) const;
};
