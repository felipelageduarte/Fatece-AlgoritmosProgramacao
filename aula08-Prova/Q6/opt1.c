#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int soma = 0;
	int num = 0;

	while(num >= 0){
		soma = soma + num;
		scanf("%d",&num);
	}
	
	printf("Soma: %d\n", soma);
	
	return 0;
}
