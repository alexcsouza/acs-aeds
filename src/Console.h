#ifndef CONSOLE_H
#define CONSOLE_H

#define INICIO_COR_ERRO    "\033[38;5;196m"
#define INICIO_COR_AVISO   "\033[38;5;214m"
#define INICIO_COR_SUCESSO "\033[38;5;119m"
#define INICIO_COR_INFO    "\033[38;5;39m"
#define INICIO_COR_DEBUG   "\033[38;5;244m"
#define FIM_COR            "\033[0m"

#define PREFIXO_DEBUG "[ DEBUG ] "

#define TAMANHO_MAXIMO_MENSAGEM 150

extern void error(const char * string);

extern void error(const char * string, const int param1);

extern void warn(const char * string);

extern void warn(const char * string, const int param1);

extern void info(const char * string);

extern void info(const char * string, const int param1);

extern void success(const char * string);

extern void success(const char * string, const int param1);

extern void debug(const char * string);

extern void debug(const char * string, const int param1);

extern void debug(const char * string, const int param1, const int param2);

#endif