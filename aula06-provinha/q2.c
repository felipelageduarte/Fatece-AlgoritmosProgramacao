#include<stdio.h>

int main(int argc, char *argv[]){

    int t;
    float v;
    float l;

    scanf("%d",&t);
    scanf("%f",&v);
    
    l = (t * v)/(12);

    printf("%.3f",l);

    return 0;
}
