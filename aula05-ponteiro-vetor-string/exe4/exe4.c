#include<stdio.h>
#include<stdlib.h>//define as funcoes para manipulacao da memoria

int main(int argc, char *argv[]){

    char *p; //p eh um ponteiro e foi declarado na minha stack
    
    p = malloc(6 * sizeof(char));//vai alocar 6 bytes = 6 * 1 byte
    
    p[0] = 'F';
    p[1] = 'e';
    p[2] = 'l';
    p[3] = 'i';
    p[4] = 'p'; 
    p[5] = 'e'; 

    printf("                 p ->  = %p\n", p);
    printf("p[0] = %c    end. p[0] = %p\n", p[0], &p[0]);
    printf("p[1] = %c    end. p[1] = %p\n", p[1], &p[1]);
    printf("p[2] = %c    end. p[2] = %p\n", p[2], &p[2]);
    printf("p[3] = %c    end. p[3] = %p\n", p[3], &p[3]);
    printf("p[4] = %c    end. p[4] = %p\n", p[4], &p[4]);
    printf("p[5] = %c    end. p[5] = %p\n", p[5], &p[5]);

    free(p); //libera a memoria alocada na heap 

    return 0;
}
