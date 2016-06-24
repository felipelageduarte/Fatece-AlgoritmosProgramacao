#include<stdio.h>
#include<stdlib.h>

float volumeEsfera(float r){
	return (4/3)*3.1415*r*r*r;
}

int main(int main, char *argv[]){
	float r;
	scanf("%f",&r);
	printf("vol: %f\n", volumeEsfera(r));
	return 0;	
}
