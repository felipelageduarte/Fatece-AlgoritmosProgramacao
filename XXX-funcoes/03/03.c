#include<stdio.h>
#include<stdlib.h>

void turista(double x){
	x += 3;
	printf("Dentro: %lf\n", x);
}

int main(int argc, char *argv[]){

	double a;
	printf("Forneca a: ");
	scanf("%lf", &a);
	printf("Antes: %lf\n", a);
	turista(a);
	printf("Depois: %lf\n", a);

	return 0;
}

