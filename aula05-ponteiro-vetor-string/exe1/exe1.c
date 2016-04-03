#include<stdio.h>
#include<stdlib.h>//define as funcoes para manipulacao da memoria

int main(int argc, char *argv[]){
    
    int a;
    int *p;

    a = 10;
    p = &a; //o ponteiro p recebe o endereco de a

    printf("     A=%d\n", a);
    printf("End. A=%p\n", &a);
    printf("     p=%p\n", p);
    printf("End. p=%p\n", &p);
    printf("  p-> =%d\n", *p);

    return 0;
}
