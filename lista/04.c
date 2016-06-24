#include<stdio.h>
#include<stdlib.h>

float media(float p1, float p2, float p3){
	if(p1 < p2 && p1 < p3){
		return (p2+p3)/2.0;
	}else if(p2 < p1 && p2 < p3){
		return (p1+p3)/2.0;
	}else{
		return (p1+p2)/2.0;
	}
}

int main(int main, char *argv[]){
	float p1, p2, p3;
	printf("Forneca nota p1: ");
	scanf("%f",&p1);
	printf("Forneca nota p2: ");
	scanf("%f",&p2);
	printf("Forneca nota p3: ");
	scanf("%f",&p3);
	printf("media: %f\n", media(p1,p2,p3));
	return 0;	
}
