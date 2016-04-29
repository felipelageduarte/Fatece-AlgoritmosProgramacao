#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int seg;//declaracao variavel seg

	scanf("%d",&seg);//leitura do tempo em segundos

	/*
		A quantidade de horas eh determinada dividindo-se
		o total de segundos por 3600 (1h = 3600seg). A 
		quantidade de segundos que sobrar dessa divisao
        de inteiros, calculado pelo operador % (resto da divisao)
		fornecera a quantidade de segundos que ainda falta
		para distribuir entre minutos e segundos. Assim,
        divide-se essa quantidade por 60 para determinar 
        quantos minutos tem. O resto desta divisao determina
		os segundos restantes.
	*/
	int hora = seg/3600; 
	int min  = (seg%3600)/60;
	seg = (seg%3600)%60;

	printf("%d:%d:%d\n", hora, min, seg);

	return 0;
}
