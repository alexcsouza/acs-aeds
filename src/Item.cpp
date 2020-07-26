#ifndef ITEM_CPP
#define ITEM_CPP

#include <stdio.h> 
#include <stdlib.h>

typedef int Chave;
typedef int Apontador;

typedef struct {
    Chave chave;
    Apontador objeto;
} Item;

#endif