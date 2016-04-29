#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int seg;//declaracao variavel seg

	scanf("%d",&seg);//leitura do tempo em segundos

	int hora = seg/3600;//fornece a quantidade de horas 
	seg = seg - (hora * 3600);//remove do tempo total a porcao
							  //de horas 
	int min  = seg/60;//Divide o tempo que sobrou por 60
					  //para determinar a quantida de minutos
	seg = seg - (min * 60);//remove do tempo total a porcao 
						   //de minutos
	//seg = seg; -> O tempo que sobrou e de fato o tempo em
	//              segundos

	printf("%d:%d:%d\n", hora, min, seg);

	return 0;
}
