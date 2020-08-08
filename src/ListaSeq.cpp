#ifndef LISTA_SEC_CPP
#define LISTA_SEC_CPP


#include <stdio.h> 
#include <stdlib.h>


#include "Item.cpp"
#include "Console.h"

#define INICIO_ARRANJO   0
#define TAMANHO_MAXIMO   1000

#define MSG_LISTA_CHEIA         "A lista está cheia."
#define MSG_POSICAO_INEXISTENTE "Posição inexistente."
#define MSG_NENHUM_ITEM         "Nenhum item a ser exibido."
#define MSG_LISTAGEM_ITENS      "Percorrendo a lista - tamanho: %d."

typedef struct {
    Item itens[TAMANHO_MAXIMO];
    Apontador primeiro, ultimo;
    int tamanho;
} ListaSeq;


ListaSeq * criarLista(){
    return (ListaSeq * ) malloc(sizeof(ListaSeq));
}

/**
 * Torna a lista vazia.
 */
void esvaziarLista(ListaSeq *lista){
    lista->primeiro = INICIO_ARRANJO;
    lista->ultimo = lista->primeiro;
    lista->tamanho = 0;
}

/**
 * Verifica se a lista está vazia
 */
int isListaVazia(const ListaSeq * lista){
    return (lista->primeiro == lista->ultimo);
}

/**
 * Alocação sequencial
 */
void inserirNoFinal(Item *item, ListaSeq *lista){
    if (lista->ultimo >= TAMANHO_MAXIMO){
        error(MSG_LISTA_CHEIA);
        return;
    } 
    debug("Inserindo item à lista: %d", item->chave);
    lista->itens[lista->ultimo] = *item;
    lista->ultimo = lista->ultimo + 1;
    lista->tamanho++;    
}

void inserirNaPosicao(int pos, Item *item, ListaSeq *lista){
    
    if (lista->ultimo >= TAMANHO_MAXIMO){
        error(MSG_LISTA_CHEIA);
        return;
    } 
   
    for(int i = lista->ultimo ; i >= (pos + 1); i--){
        lista->itens[i] = lista->itens[ i-1 ];
        lista->itens[pos] = *item;
        lista->ultimo = lista->ultimo + 1;
    }
    lista->tamanho++;    

}

void removerDaPosicao(int pos, ListaSeq *lista){
    
    if((pos >= TAMANHO_MAXIMO) || (pos < 0) || isListaVazia(lista) == 1){
        error(MSG_POSICAO_INEXISTENTE);
    }

    Item * item = &(lista->itens[pos]);
    lista->ultimo = lista->ultimo - 1;

    for(int i = pos ; i <= lista->ultimo ; i++){
        lista->itens[i] = lista->itens[ i+1 ];
    }
    lista->tamanho--;

}

void remover(int pos, ListaSeq *lista){
    
    if((pos >= TAMANHO_MAXIMO) || (pos < 0) || isListaVazia(lista) == 1){
        error(MSG_POSICAO_INEXISTENTE);
    }

    Item * item = &(lista->itens[pos]);
    lista->ultimo = lista->ultimo - 1;
    for(int i = pos ; i >= lista->ultimo ; i++){
       
        lista->itens[i] = lista->itens[ i+1 ];
    }
    lista->tamanho--;

}

void imprimirItens(ListaSeq *lista){

    if(isListaVazia(lista) == 1){
        error(MSG_NENHUM_ITEM);
        return;
    }

    int i = lista->primeiro;
    debug(MSG_LISTAGEM_ITENS, lista->tamanho);
    while(i < lista->ultimo){
        debug("%d", lista->itens[i].chave);
        i++;
    }

}

#endif