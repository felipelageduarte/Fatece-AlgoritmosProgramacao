#include<stdio.h>
#include<stdlib.h>

/*
	PROBLEMA
		Imprima todos os valores fornecidos pelo usuario
		ate que o mesmo digite um valor negativo (menor zero)

*/

int main(int argc, char *argv[]){
	
	int n;

	scanf("%d", &n);
	printf("--> %d\n", n);

	//faca este laco ate que a condicao nao seja mais
	//satisfeita	
	while(n >= 0){
		scanf("%d", &n);
		printf("--> %d\n", n);
	}

	return 0;
}
