#include<stdio.h>
#include<stdlib.h>//define as funcoes para manipulacao da memoria

int main(int argc, char *argv[]){
    
    int *p; //p eh um ponteiro e foi declarado na minha stack
    /*
    A funcao malloc (memory allocator) tem por objetivo 
    alocar (reservar) uma porcao de memoria na minha heap
    */

    //p = malloc(4);
    p = malloc(5 * sizeof(int));//vai alocar 20 bytes = 5 * 4 bytes
                                //vai alocar 5 inteiros consecutivos
    
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 60; 

    printf("                 p ->  = %p\n", p);
    printf("p[0] = %d    end. p[0] = %p\n", p[0], &p[0]);
    printf("p[1] = %d    end. p[1] = %p\n", p[1], &p[1]);
    printf("p[2] = %d    end. p[2] = %p\n", p[2], &p[2]);
    printf("p[3] = %d    end. p[3] = %p\n", p[3], &p[3]);
    printf("p[4] = %d    end. p[4] = %p\n", p[4], &p[4]);

    free(p); //libera a memoria alocada na heap 

    return 0;
}
