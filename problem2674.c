#include <stdio.h>
#include <math.h>

int VerificarNumero (int a) {
	int i, limite;
	
	if(a == 0 || a == 1)
		return 0;
	
	limite = sqrt(a);
		
	for (i = 2; i <= limite; i++) {
		if (a % i == 0)
			return 0;
	}
	
	return 1;
}

int VerificarAlgarismos (int a) {
	int x = a, y;
	
	while (x > 0) {
		y = x % 10;
		
		if (y == 1 || y == 0)
			return 0;
			
		if (VerificarNumero(y) == 0)
			return 0;
			
		x /= 10;
	}
	
	return 1;
}

int main() {
	int X;
	
	while ((scanf("%d", &X)) != EOF) { 
		
		if (VerificarNumero(X) == 1) {
			
			if(VerificarAlgarismos(X) == 1)
				printf("Super\n");
			
			else
				printf("Primo\n");
				
		}
		
		else
			printf("Nada\n");
	}
	
	return 0;
}
