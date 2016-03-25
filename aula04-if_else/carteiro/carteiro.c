#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        
    char a; // char -> 1 byte
    int b;  // int -> 4 bytes
    char c;

    printf("end a: %p\n", &a);
    printf("end b: %p\n", &b);
    printf("end c: %p\n", &c);

    return 0;
}
