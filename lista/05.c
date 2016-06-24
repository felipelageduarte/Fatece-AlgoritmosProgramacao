#include<stdio.h>
#include<stdlib.h>

int isPrimo(int n){
	int i;
	for(i = 3; i < n; ++i){
		if(n%i == 0) return 0;
	}
	return 1;
}
int proxPrimo(int n){
	while(1){
		if(isPrimo(n)){
			return n;
		}
		n++;
	}
}

int main(int main, char *argv[]){
	int n;
	printf("Forneca n: ");
	scanf("%d",&n);
	printf("primo: %d\n", proxPrimo(n));
	return 0;	
}
