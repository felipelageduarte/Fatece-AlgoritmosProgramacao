#include<stdio.h>
#include<stdlib.h>

/*
	Problema 1:

	O usuario vai fornecer um valor inteiro n
	imprima na tela todos os valores de 1 até n
*/

int main(int argc, char *argv[]){

	int n; //declaracao de variavel inteira

	//impressa na tela
	printf("Forneca o valor de n: ");
	
	//leitura do valor de n
	scanf("%d", &n);

	/*
		quando eu quero repetir algo que eu sei onde 
		comeca e termina, eu utilizo o comando for
		
		for( 1 ; 2 ; 3) {
			comandos que serao repetidos
		}
	
		1) Inicializacao
			- eh executada somente na primeira vez que o 
			  laco vai rodar
		
		2) Condicao
			- o laco for vai repetir eternamente ate que a 
			  condicao deixe de ser satisfeita 

		3) Incremento
			- sera executada TODAS as vezes menos na primeira
			  vez
	*/

	int i; // variavel contadora de laco
	for( i = 1; i <= n ; i = i + 1 ){
		printf("%d\n", i);
	}

	return 0;
}









