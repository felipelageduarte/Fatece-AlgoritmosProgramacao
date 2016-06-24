#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverte(int num){
	int num2 = 0;	

	while((num/10) != 0){
		num2 = (num2*10) + (num%10);
		num = num/10;
	}
	num2 = (num2*10) + (num%10);
	return num2;
}

int main(int argc, char *argv[]){
	int num;
	scanf("%d",&num);
	printf("%d -> %d\n",num, inverte(num));
	return 0;
}
