#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void maxmin(int *max, int *min){
	int i, num;
	
	*max = INT_MIN;
	*min = INT_MAX;
	
	for(i = 0; i < 10; ++i){
		scanf("%d",&num);
		if(num > (*max)) (*max) = num;	
		if(num < (*min)) (*min) = num;	
	}
}

int main(int argc, char *argv[]){
	int max, min;
	maxmin(&max, &min);
	printf("Max: %d\nMin: %d\n",max, min);
}
