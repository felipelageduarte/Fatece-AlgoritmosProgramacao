#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
		
	int a,b,c;

	scanf("%d %d %d", &a, &b, &c);

	/*
		CENARIO 2: Mais otimizado
		verifica cada um dos numeros se eh maior que
		os outros dois. Imprime o maior elemento
	*/
	

	if(a > b && a > c){
		printf("maior elemento: %d\n",a);
	} else if(b > c){
		printf("maior elemento: %d\n",b);
	} else {
		printf("maior elemento: %d\n",c);
	}

	return 0;
}
