#include<stdio.h>
#include<stdlib.h>
/*
	PROBLEMA:

	imprima todos os numeros pares de n ate 1

*/
int main(int argc, char *argv[]){
	
	int n, i;

	printf("Forneca o valor de n: ");
	scanf("%d", &n);

	if( (n % 2) == 1){ // o valor de n eh impar
		n = n - 1;
	}

	for(i = n; i >= 1; i = i - 2){
		printf("%d\n", i);	
		
	}


	return 0;
}
