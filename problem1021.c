#include <stdio.h>
#include <stdlib.h>

/* Função que irá calcular a quantidade de notas e centavos. */
int Contador(int *n, int m){
	int i;
	
	/* Condição para eliminas erros de arredondamento. 
	Caso o valor de entrada tenha 43 centavos, por exemplo,
	automaticamente será arredondará para 42 e por isso precisamos corrigir este erro. */
	if (*n == 42)
		*n += 1;	
	
	for(i = 0; *n >= m ; i++, *n -= m);
	return i;
}

int main() {
	double N;       /* Valor de entrado. */	
	int Notas,      /* Variável para as notas. */ 
	Centavos,       /* Variável para os centavos. */ 
	*p = &Notas,    /* Poteiro para Notas. */ 
	*q = &Centavos; /* Ponteiro para Centavos. */
	
	/* Recebendo o valor de N */ 
	scanf("%lf", &N);

	Notas = (N * 100); /* Eliminando as casas decimais. */
	Centavos = Notas % 100; /* Seperando os centavos e armazenando na variável. */
	Notas /= 100; /* Separando as notas dos centavos. */
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", Contador(p, 100));
	printf("%d nota(s) de R$ 50.00\n", Contador(p, 50));
	printf("%d nota(s) de R$ 20.00\n", Contador(p, 20));
	printf("%d nota(s) de R$ 10.00\n", Contador(p, 10));
	printf("%d nota(s) de R$ 5.00\n", Contador(p, 5));
	printf("%d nota(s) de R$ 2.00\n", Contador(p, 2));
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", Contador(p, 1));
	printf("%d moeda(s) de R$ 0.50\n", Contador(q, 50));
	printf("%d moeda(s) de R$ 0.25\n", Contador(q, 25));
	printf("%d moeda(s) de R$ 0.10\n", Contador(q, 10));
	printf("%d moeda(s) de R$ 0.05\n", Contador(q, 5));
	printf("%d moeda(s) de R$ 0.01\n", Contador(q, 1));

	return 0;
}
