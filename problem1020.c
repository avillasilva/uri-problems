#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int idade, 
	dias = 0, 
	meses = 0, 
	anos = 0,
	i;
	
	scanf("%d", &idade);
    
	for(i = 0; idade > 0; i++){
    	if(idade >= 365){
    		idade -= 365;
    		anos++;
		}
		else if(idade >= 30){
			idade -= 30;
			meses++;
		}
		else{
			dias = idade;
			idade = 0;
		}
	}
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
 
	return 0;
}
