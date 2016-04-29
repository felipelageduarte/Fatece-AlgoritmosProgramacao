#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]){

	char  *pc;
	float *px;
	float  x;
	
	x = 6.5;
	px = &x;
	pc = (char *)px; 

	printf("px aponta para:%p\npc aponta para:%p\n", px, pc);
	
	return 0;
}

/*
	REPOSTA:
-->	a) o (char *) presente na linha 12 de fato faz um casting
	   transformando o ponteiro de float para um ponteiro de char
	   como mensionado na aula de alocação de memória
	b) As variáveis pc e px apontam para o mesmo endereço de memoria
	   como pode ser visto na linha 12 e confirmado pela linha 14 
	   após a compilação e execução deste código 
    c) px + 1 incrementa o ponteiro para o próximo float, i.e, ele
	   incrementa o ponteiro em 8 bytes. 
	   (*pc) + 1 incrementa o conteudo que pc aponta, i.e., ele vai 
       incrementar o 6.5 para 7.5
    d) Como px é um ponteiro para float, a expressão px + 1 vai 
	   incrementar em 8 bytes o ponteiro, i.e., vai apontar para o 
	   próximo float na memória

*/
