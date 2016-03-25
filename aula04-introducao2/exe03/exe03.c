
#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
    
    double a, b, c;

    printf("Forneca os valores de a, b, c: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    //Bora calcular delta
    double delta;
    delta = b*b - 4*a*c;

    //- delta -> delta nao pode assumir o valor negativo
    // esta eh uma estrutura de decisao
    // "se o delta for negativo, i.e., menor que zero, 
    // execute os comandos que estao dentro da chaves
    if(delta < 0){
        printf("Essa equacao nao produz raizes reais\n");
    } else {
        //vai executar este trecho de codigo
        //quando delta >= 0(maior ou igual)
        
        // lf -> long float -> utilizado para double 
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

        if(delta == 0){
            //entrara aqui quando, delta for igual a zero
            printf("Raiz com multiplicidade dois\n");
            printf("x1 == x2:%lf\n", x1);
        } else {
            //entrara aqui quando delta maior que zero
            printf("Raizes reais -> x1: %lf\tx2: %lf\n",x1, x2);
        }
    
    }
    
    return 0;
}











