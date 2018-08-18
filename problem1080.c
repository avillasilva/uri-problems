#include <stdio.h>

/* Programa para ler 100 números inteiros e retornar o maior valor digitado e a sua posição. */

int main () {
	int N, maior, posicao, i;
	
	maior = 0;
	for (i = 1; i <= 100; i++) {
		scanf("%d", &N);
		if (N > maior) {
			maior = N;
			posicao = i;
		}
	}
	
	printf("%d\n%d\n", maior, posicao);
	
	return 0;
}
