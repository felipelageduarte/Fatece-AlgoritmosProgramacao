#include<stdio.h>
#include<stdlib.h>

float imc(float altura, float peso){
	return peso/(altura*altura);
}

int main(int main, char *argv[]){
	float altura, peso;
	printf("Forneca altura: ");
	scanf("%f",&altura);
	printf("Forneca peso: ");
	scanf("%f",&peso);
	printf("IMC: %f\n", imc(altura, peso));
	return 0;	
}
