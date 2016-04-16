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

	for(i = 2; i <= n; i = i + 2){
		printf("%d\n", i);	
		
	}


	return 0;
}
