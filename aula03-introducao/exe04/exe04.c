#include<stdio.h>

int main(int argc, char *argv[]){

    char   a; // char   -> 1byte
    int    b; // int    -> 4bytes 
    float  c; // float  -> 4bytes
    double d; // double -> 8bytes
    long   e; // long   -> 8bytes

    printf("char:   %ld\n", sizeof(a));
    printf("int:    %ld\n", sizeof(b));
    printf("float:  %ld\n", sizeof(c));
    printf("double: %ld\n", sizeof(d));
    printf("long:   %ld\n", sizeof(e));

    return 0;
}
