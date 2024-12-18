/*
A C-Programm is made up of Tokens.
Tokens are the smallest individual elements in a program that is meaningful to the functioning of a compiler
if we break a C programm into tokens then it will look like:
    Tokens:
    '#include'      : Preprocessor directive
    '<stdio.h>'     : Header file
    'int'           : Keyword (data type)
    'main'          : Identifier (function name)
    '('             : Symbol (left parenthesis)
    ')'             : Symbol (right parenthesis)
    '{'             : Symbol (left brace)
    'printf'        : Identifier (function name)
    '('             : Symbol (left parenthesis)
    "Hello, World!" : String literal
    ')'             : Symbol (right parenthesis)
    ';'             : Symbol (semicolon)
    'return'        : Keyword
    '0'             : Integer literal
    ';'             : Symbol (semicolon)
    '}'             : Symbol (right brace)
A C-programm is made up of tokens and tokens are made up of 
    1.KeyWords
    2.Identifiers
    3.Constant
    4.Literals
    5.Symbols.
Flow of a C-Program
    Pre-Processing -> Compilation -> Assembly -> Linking -> loading
*/
#include "stdio.h"

int main()
{
    printf("Hello, World\n");
    return 0;
}