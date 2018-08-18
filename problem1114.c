#include <stdio.h>

/* Solution of the problem 1114 from URI */

main(){
	int senhaCorreta, senhaDigitada;
	
	senhaCorreta = 2002;
	
	do {
		scanf("%d", &senhaDigitada);
		
		if (senhaDigitada == senhaCorreta)
			printf("Acesso Permitido\n");
		
		else
			printf("Senha Invalida\n");
	
	} while (senhaDigitada != senhaCorreta);
}
