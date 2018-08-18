#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, i, j, leds = 0;
	char numero[100];
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%s", &numero);
		
		for(j = 0; j < strlen(numero); j++)
		{
			if(numero[j] == '0')
			leds += 6;
			
			if(numero[j] == '1')
			leds += 2;
			
			if(numero[j] == '2')
			leds += 5;
			
			if(numero[j] == '3')
			leds += 5;
			
			if(numero[j] == '4')
			leds += 4;
			
			if(numero[j] == '5')
			leds += 5;
			
			if(numero[j] == '6')
			leds += 6;
			
			if(numero[j] == '7')
			leds += 3;
			
			if(numero[j] == '8')
			leds += 7;
			
			if(numero[j] == '9')
			leds += 6;
		}
		
		printf("%d leds\n", leds);
		leds = 0;
	}
	
	return 0;
}
