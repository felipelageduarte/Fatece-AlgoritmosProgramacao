#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){
	
	int n,frozen; // variavel contadora de laco
	float acumulador = 0;

	printf("Forneca o valor de n: ");
	scanf("%d", &n);

	for( frozen = 1 ; frozen <= n ; frozen = frozen + 1){
		acumulador = acumulador + ((sqrt(n)*frozen) / (-1 + frozen + pow(n,2)));
	}

	printf("resultado da serie: %f\n", acumulador);

	return 0;
}
