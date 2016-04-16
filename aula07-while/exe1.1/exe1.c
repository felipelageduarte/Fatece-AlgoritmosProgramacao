#include<stdio.h>
#include<stdlib.h>

/*
	PROBLEMA
		Imprima todos os valores fornecidos pelo usuario
		ate que o mesmo digite um valor negativo (menor zero)

*/

int main(int argc, char *argv[]){
	
	int n;
	//faca os comandos 
	do{
		scanf("%d", &n);
		printf("--> %d\n", n);
	}while(n >= 0);
	//ate que a condicao nao seja satisfeita
	//enquanto a condicao a condicao for verdadeira

	return 0;
}
