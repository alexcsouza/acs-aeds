#ifndef ITEM_CPP
#define ITEM_CPP

#include <stdio.h> 
#include <stdlib.h>

#include "Console.h"

typedef int Chave;
typedef int Apontador;

typedef struct {
    Chave chave;
} Item;

Item * criarItem(const int chave){
    Item * item = (Item * ) malloc(sizeof(Item));
    debug("Criando item: %d", chave);
    //printf("teste: %d", chave);
    item->chave = chave;
    return item;
}

#endif