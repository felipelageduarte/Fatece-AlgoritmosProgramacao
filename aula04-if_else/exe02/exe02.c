/*

Exercicio eq grau

ax^2+bx+c=0

delta = b*b - 4*a*c

x1 = (-b + sqrt(delta))/2*a
x2 = (-b - sqrt(delta))/2*a

?????:
    - a -> nao pode assumir valor zero. Pq se nao, nao definimos 
           uma equacao do segundo grau
    - delta -> delta nao pode assumir o valor negativo
*/

#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
    double a = 1, 
           b = -16,
           c = 63;

    //Bora calcular delta
    double delta;
    delta = b*b - 4*a*c;

    //- delta -> delta nao pode assumir o valor negativo
    // esta eh uma estrutura de decisao
    // "se o delta for negativo, i.e., menor que zero, 
    // execute os comandos que estao dentro da chaves
    if(delta < 0){
        printf("Essa equacao nao produz raizes reais\n");
        return 0;
    }

    printf("delta: %lf\n", delta);

    double x1;
    double x2;
    /*
        Estamos calculando as raizes reais.
        a funcao sqrt e demais funcoes matematicas
        estao definidas dentro da biblioteca math.h
    */
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;

    printf("x1:%lf\tx2:%lf\n", x1, x2);

    return 0;
}











