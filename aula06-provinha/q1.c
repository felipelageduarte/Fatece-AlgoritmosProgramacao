#include<stdio.h>

int main(int argc, char *argv[]){
    int a, b, c, e;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&e);

    if(a + b > c || a + b > e || 
       a + c > b || a + c > e || 
       a + e > b || a + e > c){
        printf("SIM\n");
    } else {
        if(b + a > c || b + a > e || 
           b + c > a || b + c > e || 
           b + e > a || b + e > c){
            printf("SIM\n");
        }else if(c + a > b || c + a > e || 
           c + b > a || c + b > e || 
           c + e > a || c + e > b){
            printf("SIM\n");
        } else if(e + a > b || e + a > c || 
           e + b > a || e + b > c || 
           e + c > a || e + c > b){
            printf("SIM\n");
        } else {
           printf("NAO\n");
        }
    }
    return 0;
}
