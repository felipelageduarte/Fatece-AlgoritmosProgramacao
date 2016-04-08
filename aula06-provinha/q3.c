#include<stdio.h>

int main(int argc, char *argv[]){

    int x, y

    scanf("%d %d", &x, &y);

    if(x == 0 && y == 0){
        printf("Origem\n");
    }else if(x== 0 && y != 0){
        printf("Eixo Y\n");
    } else if(x != 0 && y == 0){
        printf("Eixo X\n");
    } else{
        //dentro dos quadrantes
        if(x > 0 && y > 0) printf("Q1\n"); 
        if(x < 0 && y > 0) printf("Q2\n"); 
        if(x < 0 && y < 0) printf("Q3\n"); 
        if(x > 0 && y < 0) printf("Q4\n"); 
    }
    
    return 0;
};


