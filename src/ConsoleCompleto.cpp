#ifndef CONSOLE_COMPLETO_CPP
#define CONSOLE_COMPLETO_CPP

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


void error(const char * string){
    
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_ERRO);
    strcat(s, "[ ERROR ] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "%s\n");
    printf(s,"");
    

}
/*
void error(const char * string, const int param1){
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_ERRO);
    strcat(s, "[ ERROR ] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "\n");
    printf(s, param1);
}
*/
void warn(const char * string){
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_AVISO);
    strcat(s, "[ WARN  ] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "%s\n");
    printf(s,"");
}

void warn(const char * string, const int param1){
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_AVISO);
    strcat(s, "[ WARN  ] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "\n");
    printf(s, param1);
}

void info(const char * string){
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_INFO);
    strcat(s, "[ INFO  ] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "%s\n");
    printf(s, "");
}

void info(const char * string, const int param1){
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_INFO);
    strcat(s, "[ INFO  ] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "\n");
    printf(s, param1);
}


void success(const char * string){
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_SUCESSO);
    strcat(s, "[SUCCESS] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "%s\n");
    printf(s,"");
}

void success(const char * string, const int param1){
    char s[TAMANHO_MAXIMO_MENSAGEM] = {};
    strcat(s, INICIO_COR_SUCESSO);
    strcat(s, "[SUCCESS] ");
    strcat(s, FIM_COR);
    strcat(s, string);
    strcat(s, "\n");
    printf(s, param1);
}


void debug(const char * string){
    printf("%s%s%s%s\n", INICIO_COR_DEBUG, PREFIXO_DEBUG, FIM_COR, string);
}

void debug(const char * string, const int param1){
    printf("%s%s%s", INICIO_COR_DEBUG, PREFIXO_DEBUG, FIM_COR);
    printf(string,param1);
    printf("\n");
}

void debug(const char * string, const int param1, const int param2){
    printf("%s%s%s", INICIO_COR_DEBUG, PREFIXO_DEBUG, FIM_COR);
    printf(string, param1, param2);
    printf("\n");
}


#endif