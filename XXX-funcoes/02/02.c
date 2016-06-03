#include<stdio.h>
#include<stdlib.h>

void rosinha(double x){
	printf("Uiii, x=%lf\n", x);
}

int main(int argc, char *argv[]){

	double a;
	printf("Forneca a: ");
	scanf("%lf", &a);

	rosinha(a);
	return 0;
}

