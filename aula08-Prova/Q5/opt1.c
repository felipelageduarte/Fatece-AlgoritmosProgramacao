#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	float x;
	int n;
	float soma = 0;
	int i;

	scanf("%f %d", &x, &n); 

	for(i = 1; i < n; ++i){
		soma = soma + ((x + i) / (x * i - 1));
	}
	printf("Somatorio: %f\n",soma);
	
	return 0;
}
