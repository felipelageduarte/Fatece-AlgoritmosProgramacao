#include<stdio.h>
#include<stdlib.h>

double robson(double, double);

int main(int argc, char *argv[]){

	double a, b;
	printf("Forneca x e y: ");
	scanf("%lf %lf", &a, &b);

	double resultado = robson(a,b);

	printf("Resultado: %lf\n",resultado);	

	return 0;
}

double robson(double x, double y){
	double c = (x*x)+(y*y);
	return c;
}
