#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverte(int num){
	char snum1[50], snum2[50];
	int i, tam, num2;	
	//converte numero para string
	sprintf(snum1, "%d", num);
	//calcula qts digitos tem o numero
	tam = strlen(snum1);
	//percorre todos os digitos e inverte na str2
	for(i=0; i < tam; ++i){
		snum2[i] = snum1[tam-1-i];
	}
	snum2[tam] = '\0';
	//converte string para int e retorna
	return atoi(snum2);
}

int main(int argc, char *argv[]){
	int num;
	scanf("%d",&num);
	printf("%d -> %d\n",num, inverte(num));
	return 0;
}
