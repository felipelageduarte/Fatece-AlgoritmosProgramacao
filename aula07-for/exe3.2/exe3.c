#include<stdio.h>
#include<stdlib.h>
/*
	PROBLEMA:

	imprima todos os numeros pares ate n

*/
int main(int argc, char *argv[]){
	
	int n, i;

	printf("Forneca o valor de n: ");
	scanf("%d", &n);

	for(i = 2; i <= n; i = i + 1){
		printf("%d", i);	
		//se for par imprime
		if( (i % 2) == 0){ //este numero i eh par
			printf(" - par\n");	
		}else {
			printf(" - impar\n");
		}
	}


	return 0;
}
