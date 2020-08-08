#ifndef CONSOLE_TESTS_CPP
#define CONSOLE_TESTS_CPP

#include <errno.h> 

#include "../include/doctest.h"


#include "../src/ConsoleSilencioso.cpp"

TEST_CASE("Testando o registro de um erro sem parâmetros."){

    SUBCASE("Mensagem de Erro"){
        error("Testando a mensagem de erro.");
        CHECK_EQ(errno, 0);
    }

    SUBCASE("Mensagem de Erro com parâmetro inteiro"){
        error("Testando a mensagem de erro: %d.", 123);
        CHECK_EQ(errno, 0);
    }
    
}


#endif
