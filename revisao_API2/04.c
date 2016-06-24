#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cifraCesar(char text[], int shift){
	int i;
	for(i = 0; i < strlen(text); ++i)
			text[i] = ((26 + ( (text[i] - 97) + shift)) % 26)+97;
}

int main(int argc, char *argv[]){
	char text[100];
	int shift;
	scanf("%s",text);
	scanf("%d",&shift);
	printf("%s -> ", text);
	cifraCesar(text, shift);
	printf("%s\n", text);
	return 0;
}
