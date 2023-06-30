#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N = 1, i, j, count = 1;
	
	while(N != 0){
		
		scanf("%d", &N);
		
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
			{
				if(i == 0 || j == 0 || i == N - 1 || j == N - 1)
				{
					printf("%d", count);
				}
				
				else
				printf("%d", count + 1);
			
				if(j == N - 1)
					printf("\n");
			
				else
				{
					printf(" ");
				}
			}
		}
	}

	return 0;
}
