#include<stdio.h>
#include<stdlib.h>

void min_max(double a, double b, double c, 
			 double *min, double *max){
	(*max) = a;
	(*min) = a;

	if(a > b && a > c){
		(*max) = a;
	}else if(b > a && b > c){
		(*max) = b;
	}else if(c > a && c > b){
		(*max) = c;
	}
	
	if(a < b && a < c){
		(*min) = a;
	}else if(b < a && b < c){
		(*min) = b;
	}else if(c < a && c < b){
		(*min) = c;
	}
}

int main(int argc, char *argv[]){

	double a, b, c;
	double min, max;

	printf("Forneca a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	min_max(a, b, c, &min, &max);
	printf("Min: %lf\n", min);
	printf("Max: %lf\n", max);

	return 0;
}

