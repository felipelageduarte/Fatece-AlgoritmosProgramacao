#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int numInteiro;
	float numFloat;
	char string[30];	

	scanf("%d", &numInteiro);
	scanf("%f", &numFloat);
	scanf("%s", string);
	
	printf("%d\n", numInteiro);
	printf("%f\n", numFloat);
	printf("%s\n", string);

	return 0;
}
