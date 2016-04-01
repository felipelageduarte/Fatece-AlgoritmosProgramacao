#include<stdio.h>
#include<stdlib.h>//define as funcoes para manipulacao da memoria

int main(int argc, char *argv[]){

    char *p; //p eh um ponteiro e foi declarado na minha stack
    
    p = malloc(100* sizeof(char));//vai alocar 6 bytes = 6 * 1 byte
    
    scanf("%s", p);

    printf("%s\n", p);

    free(p); //libera a memoria alocada na heap 

    return 0;
}
