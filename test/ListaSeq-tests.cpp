#ifndef LISTA_SEQ_TESTS_CPP
#define LISTA_SEQ_TESTS_CPP

#include <errno.h> 

#include "../include/doctest.h"
#include "../src/ListaSeq.cpp"


TEST_CASE("Testando a criação de uma nova lista sequencial."){
    ListaSeq * listaSeq = criarLista();
    CHECK_NOTHROW(criarLista());
    CHECK_EQ(errno, 0);
}

TEST_CASE("Testando a validação de lista vazia quando realmente está."){
    ListaSeq * listaSeq = criarLista();
    CHECK_EQ(isListaVazia(listaSeq), 1);
    CHECK_EQ(errno, 0);
}

TEST_CASE("Testando a validação de lista vazia quando NÃO está."){
    ListaSeq * listaSeq = criarLista();
    Item * item1 = criarItem(1);
    inserirNoFinal(item1, listaSeq);

    CHECK_EQ(isListaVazia(listaSeq), 0);
    CHECK_EQ(errno, 0);
    
}

TEST_CASE("Testando a remoção de um item já inserido da posição correspondente."){

    ListaSeq * listaSeq = criarLista();
    Item * item1 = criarItem(1);
    Item * item2 = criarItem(2);
    Item * item3 = criarItem(3);
    Item * item4 = criarItem(4);
    Item * item5 = criarItem(5);

    inserirNoFinal(item1, listaSeq);
    inserirNoFinal(item2, listaSeq);
    inserirNoFinal(item3, listaSeq);
    inserirNoFinal(item4, listaSeq);
    inserirNoFinal(item5, listaSeq);

    imprimirItens(listaSeq);

    removerDaPosicao(3, listaSeq);

    imprimirItens(listaSeq);

    CHECK_EQ(listaSeq->itens[3].chave, 5);
    CHECK_EQ(listaSeq->itens[2].chave, 3);
    CHECK_EQ(errno, 0);
    
}


#endif
