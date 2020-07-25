#ifndef ITEM_C
#define ITEM_C


#include <stdio.h> 
#include <stdlib.h>

typedef int Chave;
typedef int Apontador;

typedef struct {
    Chave chave;
    Apontador objeto;
} Item;


#endif