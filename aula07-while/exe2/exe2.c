#include<stdio.h>
#include<stdlib.h>

/*
	PROBLEMA

	Qual eh o valor de n que a minha sequencia
	numerica 1/i eh menor que n 
	
*/


int main(int argc, char *argv[]){

	float n;
	float f_x;
	float x;

	printf("Forneca o valor de n: ");
	scanf("%f", &n);
	
	f_x = n;
	while(f_x >= n){
		f_x = 1/x;
		x = x + 0.0001;
	}

	printf("%f\n", x);


	return 0;
}
