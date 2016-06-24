#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(char str[]){
	int i;
	for(i=0; i < strlen(str)/2; ++i){
		if(str[i] != str[strlen(str) - 1 -i]){ 
			return 0;
		}
	}	
	return 1;
}

int main(int argc, char *argv[]){
	char str[100];
	scanf("%s",str);
	printf("%s -> %d\n", str, palindromo(str));
	return 0;
}
