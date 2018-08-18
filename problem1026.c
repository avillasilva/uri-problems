#include <stdio.h>
#include <math.h>

void Binario (unsigned long int a, unsigned long int *b) {
	int i;
	
	for (i = 0; i < 32; i++) 
		b[i] = 0;
	
	for (i = 31; a > 0; a /= 2, i--)
		b[i] = a % 2;
}

void Soma (unsigned long int *a, unsigned long int *b) {
	unsigned long int i, j, v[32], result = 0;
	
	for (i = 0; i < 32; i++)
		v[i] = 0;
	
	for (i = 0; i < 32; i++) {
		if (a[i] == 1 && b[i] == 1)
			v[i] = 0;
			
		else
			v[i] = a[i] + b[i];
	}
	
	
	for (i = 31, j = 0; i != 0; i--, j++) {
		result += v[i] * pow(2, j);
	}
	
	result += v[0] * pow(2, 31);
	
	printf("%lu\n", result);
}
 
int main() {
	unsigned long int entrada1, entrada2, saida[32], aux[32], aux2[32], *p = aux, *q = aux2, i;
	
	while ((scanf("%lu %lu", &entrada1, &entrada2)) != EOF) {
		Binario (entrada1, p);
		Binario (entrada2, q);	
		Soma (p, q);
	}

	return 0;
}
