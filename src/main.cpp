#ifndef MAIN_CPP
#define MAIN_CPP
#define CONSOLE_COMPLETO_CPP

#include <stdio.h> 
#include <stdlib.h>


//#include "ListaEnc.c"
#include "ListaSeq.cpp"
#include "Console.h"


int main(int argc, char* argv[]){

    if(argv[0] == "--silent"){
        #include "ConsoleSilencioso.cpp"
    }else{
        #include "ConsoleCompleto.cpp"
    }

    erro("teste");

    //printf("[App] %d %s",argc ,*argv);
/*
    ListaSeq * lista = (ListaSeq * ) malloc(sizeof(ListaSeq));
    Item * item1 = (Item * ) malloc(sizeof(Item));
    item1->chave = 5;
    
    Item * item2 = (Item * ) malloc(sizeof(Item));
    item2->chave = 6;
    
    inserirNoFinal(item1, lista);
    inserirNoFinal(item2, lista);

    int listaVazia = isListaVazia(lista);
    //debug("%d", listaVazia);
    imprimirItens(lista);

*/
    

    return 0;
}

#endif