#include <stdio.h>

int main () {
	char string[4];
	int testes, i, digito1, digito2, resultado;
	
	scanf("%d", &testes);
	
	for (i = 0; i < testes; i++) {
		scanf ("%s", &string);
		
		digito1 = string[0] - 48;
		digito2 = string[2] - 48;
		
		if (string[0] == string[2])
			resultado = digito1 * digito2;
		
		else if (string[1] >= 65 && string[1] <= 90)
			resultado = digito2 - digito1;
			
		else
			resultado = digito1 + digito2;
		
		printf("%d\n", resultado); 
	}
	
	return 0;
}
