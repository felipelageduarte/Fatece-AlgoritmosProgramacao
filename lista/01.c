#include <stdio.h>
#include <stdlib.h>

void tabuada(int inicio, int fim){
	int i, j;
	for(i = 1; i <= 10; ++i){
		for(j = inicio; j <= fim; ++j)
			printf("%dx%d=%d\t", i, j, j*i);
		printf("\n");
	}
}

int main(int argc, char *argv[]){
	tabuada(1,5);
	printf("\n\n");
	tabuada(6,10);
}
