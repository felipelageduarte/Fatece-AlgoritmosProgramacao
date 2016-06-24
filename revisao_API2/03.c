#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vide: https://en.wikipedia.org/wiki/Rabin%E2%80%93Karp_algorithm
int substr(char str1[], char str2[]){
	//se o tamanho da str2 for maior que str1 já retorna 0
	if(strlen(str2) > strlen(str1)) return 0;
	int i, j;
	for(i=0; i < (strlen(str1)-strlen(str2)+1); ++i){
		for(j=0; j < strlen(str2); ++j){
			if(str1[i+j] != str2[j]){
				break;
			}
		}
		if(j == strlen(str2)) return 1;
	}

	return 0;
}

int main(int argc, char *argv[]){
	char str1[100], str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	printf("%s/%s -> %d\n", str1, str2, substr(str1, str2));
	return 0;
}
