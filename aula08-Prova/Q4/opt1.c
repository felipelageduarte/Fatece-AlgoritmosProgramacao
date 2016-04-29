#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
		
	int a,b,c;

	scanf("%d %d %d", &a, &b, &c);

	/*
		CENARIO 1: Menos otimizado
		verifica cada um dos numeros se eh maior que
		os outros dois. Imprime o maior elemento
	*/
	

	if(a > b && a > c){
		printf("maior elemento: %d\n",a);
	}

	if(b > a && b > c){
		printf("maior elemento: %d\n",b);
	}

	if(c > a && c > b){
		printf("maior elemento: %d\n",c);
	}

	//observer que se todos os numero forem iguais
	//ele nao iria entrar em nenhum dos if's anterior
	//por isso a condicao de igualdade deve existir
	//apesar disso, nao considerei como errado quem
	//por ventura esqueceu desta condicao
	if(a == b && a == c){
		printf("maior elemento: %d\n",a);
	}

	return 0;
}
