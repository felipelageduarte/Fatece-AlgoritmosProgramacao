#include<stdio.h>
#include<stdlib.h>//define as funcoes para manipulacao da memoria

int main(int argc, char *argv[]){
    
    int *p; //p eh um ponteiro e foi declarado na minha stack
    /*
    A funcao malloc (memory allocator) tem por objetivo 
    alocar (reservar) uma porcao de memoria na minha heap
    */

    //p = malloc(4);
    p = malloc(sizeof(int));
    
    (*p) = 10;

    printf("                              End. p: %p\n", &p);
    printf("End. memoria plenamente alocada heap: %p\n", p);
    printf("       conteudo que p esta apontando: %d\n", *p);

    free(p); //libera a memoria alocada na heap 

    return 0;
}
