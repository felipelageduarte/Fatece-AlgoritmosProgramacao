#include<stdio.h>

int main(int argc, char *argv[]){
    
    int idade = 23;//declaracao de variavel inteira
    float peso = 55.93;//declaracao de variave ponto flutuante

    printf("Digite o sua idade: ");

    //scanf();

    // %d <- mascara para inteiro
    // %f <- mascara para pontos flutuantes
    printf("Idade: %d\tpeso:%.2f\n", idade, peso);

    return 0;
}
