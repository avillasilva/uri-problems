#include <stdio.h>

int main () {
	int N, Quantia, Ratos, Sapos, Coelhos, Total;
	char Tipo;
	double pRatos, pSapos, pCoelhos; 
	
	scanf("%d", &N);
	
	Ratos = 0;
	Sapos = 0;
	Coelhos = 0;
	Total = 0;
	
	while (N > 0) {
		fflush(stdin);
		scanf("%d %c", &Quantia, &Tipo);
		
		if (Tipo == 'R')
			Ratos += Quantia;
		
		else if (Tipo == 'S')
			Sapos += Quantia;
			
		else
			Coelhos += Quantia;
		
		Total += Quantia;
		
		N--;
	}
	
	pRatos = (Ratos * 100) / (double)Total;
	pSapos = (Sapos * 100) / (double)Total;
	pCoelhos = (Coelhos * 100) / (double)Total;
	
	printf("Total: %d cobaias\n", Total);
	printf("Total de coelhos: %d\n", Coelhos);
	printf("Total de ratos: %d\n", Ratos);
	printf("Total de sapos: %d\n", Sapos);
	printf("Percentual de coelhos: %.2lf %%\n", pCoelhos);
	printf("Percentual de ratos: %.2lf %%\n", pRatos);
	printf("Percentual de sapos: %.2lf %%\n", pSapos);	
	
	return 0;
}
