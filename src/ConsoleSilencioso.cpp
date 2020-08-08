#ifndef CONSOLE_SILENCIOSO_CPP
#define CONSOLE_SILENCIOSO_CPP

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "Console.h"

// #define INICIO_COR_ERRO    "\033[38;5;196m"
// #define INICIO_COR_AVISO   "\033[38;5;214m"
// #define INICIO_COR_SUCESSO "\033[38;5;119m"
// #define INICIO_COR_INFO    "\033[38;5;39m"
// #define INICIO_COR_DEBUG   "\033[38;5;244m"
// #define FIM_COR            "\033[0m"

// #define PREFIXO_DEBUG "[ DEBUG ] "

// #define TAMANHO_MAXIMO_MENSAGEM 150


void error(const char * string){}

void error(const char * string, const int param1){}

void warn(const char * string){}

void warn(const char * string, const int param1){}

void info(const char * string){}

void info(const char * string, const int param1){}


void success(const char * string){}

void success(const char * string, const int param1){}


void debug(const char * string){}

void debug(const char * string, const int param1){}

void debug(const char * string, const int param1, const int param2){}


#endif