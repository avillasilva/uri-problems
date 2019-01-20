#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		if(a % b == 0)
		printf("Sao Multiplos\n");
		
		else
		printf("Nao sao Multiplos\n");
	}
	
	else if(b > a){
		if(b % a == 0)
		printf("Sao Multiplos\n");
		
		else
		printf("Nao sao Multiplos\n");
	}
	
	else if(a == b)
	printf("Sao Multiplos\n");
	
	return 0;
}
