#ifndef LISTA_ENC_CPP
#define LISTA_ENC_CPP


#include <stdio.h> 
#include <stdlib.h>

#include "Item.cpp"

#define INICIO_ARRANJO   0
#define TAMANHO_MAXIMO   1000

#define MSG_LISTA_CHEIA         "A lista está cheia."
#define MSG_POSICAO_INEXISTENTE "Posição inexistente."


typedef struct {
    Item item[TAMANHO_MAXIMO];
    Apontador primeiro, ultimo;
} ListaEnc;

/**
 * Torna a lista vazia.
 */
void esvaziarLista(ListaEnc *lista){
    lista->primeiro = INICIO_ARRANJO;
    lista->ultimo = lista->primeiro;
}

/**
 * Verifica se a lista está vazia
 */
int isListaVazia(const ListaEnc *lista){
    return (lista->primeiro == lista->ultimo);
}

/**
 * Alocação sequencial
 */
void inserirNoFinal(Item item, ListaEnc lista){
    if (lista.ultimo >= TAMANHO_MAXIMO){
        printf(MSG_LISTA_CHEIA);
        return;
    } 
    
    lista.item[lista.ultimo] = item;
    lista.ultimo = lista.ultimo + 1;
    
}

void inserirNaPosicao(int pos, Item item, ListaEnc lista){
    
    if (lista.ultimo >= TAMANHO_MAXIMO){
        printf(MSG_LISTA_CHEIA);
        return;
    } 
   
    for(int i = lista.ultimo ; i >= (pos + 1); i--){
        lista.item[i] = lista.item[ i-1 ];
        lista.item[pos] = item;
        lista.ultimo = lista.ultimo + 1;
    }

}

void removerDaPosicao(int pos, Item item, ListaEnc lista){
    
    if((pos >= TAMANHO_MAXIMO) || (pos < 0) || isListaVazia(&lista)){
        printf(MSG_POSICAO_INEXISTENTE);
    }
        
    item = lista.item[pos];
    lista.ultimo = lista.ultimo - 1;
    for(int i = pos ; i >=lista.ultimo ; i++){
        lista.item[i] = lista.item[ i+1 ];
    } 

}

#endif