#include<stdio.h>
#include<stdlib.h>

/*

	Problema 2:

	resolver o somatorio de 1 ate n de 1/i

*/

int main(int argc, char *argv[]){
	
	int n,frozen; // variavel contadora de laco
	float acumulador = 0;

	printf("Forneca o valor de n: ");
	scanf("%d", &n);

	for( frozen = 1 ; frozen <= n ; frozen = frozen + 1){
		acumulador = acumulador + (1/((float)frozen));
	}

	printf("resultado da serie: %f\n", acumulador);

	return 0;
}
