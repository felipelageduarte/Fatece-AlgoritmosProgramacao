#include<stdio.h>
#include<stdlib.h>

void mult2(double *x){
	(*x) = (*x) * 2;
}

int main(int argc, char *argv[]){

	double a;
	printf("Forneca a: ");
	scanf("%lf", &a);
	mult2(&a);
	printf("resultado: %lf\n", a);

	return 0;
}

