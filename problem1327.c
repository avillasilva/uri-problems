#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N = 1, A, B, i, jogador1, jogador2;
	
	while (N != 0)
	
	{
		scanf("%d", &N);
		
		jogador1 = 0;
		jogador2 = 0;
		
		if (N != 0)
		
		{
			for (i = 0; i < N; i++)
			
			{
				scanf("%d %d", &A, &B);
				
				if (A > B)
				
				{
				    jogador1 += 1;
			    }
				
				if (B > A)
				
				{
				    jogador2 += 1;
                }
			}
			
			printf("%d %d\n", jogador1, jogador2);
		}
	}
	
	return 0;
}
