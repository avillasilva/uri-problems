#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int N, i, j, aux, posicao;
	
	do{
		scanf("%d", &N);
		
		int v[N], posicao[N];
		
		if (N != 0)
		
		{	
			for (i = 0; i < N; i++)
			
			{
				scanf("%d", &v[i]);
				posicao[i] = i + 1;
			}
			 
			for (i = 0; i < N; i++)
			
			{
                for (j = i + 1; j < N; j++)
                
                {
                	if (v[i] > v[j])
                	
                	{
                		aux = v[i];
                		v[i] = v[j];
                		v[j] = aux;
                		aux = posicao[i];
                		posicao[i] = posicao[j];
                		posicao[j] = aux;
					}
				}
		    }
		    
		    printf("%d\n", posicao[N-2]);
		}
		
	}while(N != 0);
	
	return 0;
}
