#ifndef LISTA_SEQ_TESTS_CPP
#define LISTA_SEQ_TESTS_CPP

#include "../include/doctest.h"
#include "../src/ListaSeq.cpp"

TEST_CASE("Testando a criação de uma nova lista sequencial."){

    ListaSeq * listaSeq = criarLista();
    printf("%p", listaSeq);

    CHECK_NOTHROW(criarLista());
    // CHECK(toCelsius(32)==0);
    // CHECK(toCelsius(0)==doctest::Approx(-17.777).epsilon(0.0001));
}

TEST_CASE("Testando a validação de lista vazia quando realmente está."){
    ListaSeq * listaSeq = criarLista();
    CHECK_EQ(isListaVazia(*listaSeq), 1);
}

TEST_CASE("Testando a validação de lista vazia quando NÃO está."){
    ListaSeq * listaSeq = criarLista();
    Item * item1 = (Item * ) malloc(sizeof(Item));
    inserirNoFinal(*item1, *listaSeq);
    CHECK_EQ(isListaVazia(*listaSeq), 0);
}

// TEST_CASE("Testando conversão de Fahrenheit para Celsius"){
//     CHECK(toFahrenheit(5.00)==41);
//     CHECK(toFahrenheit(0.00)==32);
//     CHECK(toFahrenheit(-17.7777)==doctest::Approx(0).epsilon(0.001));
// }

#endif
