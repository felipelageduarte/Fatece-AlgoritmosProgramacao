#include <stdio.h>
#include <stdlib.h>

void polyDerivative(double pol[], int *degree){
	int i;
	for(i = 0; i < (*degree); ++i)	pol[i] = pol[i+1]*(i+1);
	(*degree) -= 1;
}

int main(int argc, char *argv[]){
	int degree;
	scanf("%d", &degree);
	double pol[degree + 1];
	int i;
	for(i = 0; i <= degree; ++i){
		scanf("%lf", &pol[i]);
	}
		
	polyDerivative(pol, &degree);

	for(i=degree; i >= 0; --i){
		if(pol[i] != 0){
			printf((pol[i] < 0)?" ":" +"); 
			printf("%.1lf", pol[i]);
			if(i!=0)printf("x^%d", i);
		}
	}
	return 0;
}
