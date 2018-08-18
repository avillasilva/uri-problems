#include <stdio.h>

int main () {
	double salario, 
	pimposto, //Parcela do salário sobre o qual será contabilizado o imposto.
	imposto = 0;
	
	scanf ("%lf", &salario);
	
	if (salario <= 2000)
		printf("Isento\n");
	
	else {
		
		pimposto = salario - 2000;
		
		if (pimposto >= 1000) {
			imposto += 1000 * 0.08;
			pimposto -= 1000;
		} 
		
		else {
			imposto += pimposto * 0.08;
			pimposto = 0;
		}
		
		if (pimposto != 0 && pimposto >= 1500) {
			imposto += 1500 * 0.18;
			pimposto -= 1500;
		} 
	
		else {
			imposto += pimposto * 0.18;
			pimposto = 0;
		}
		
		if (pimposto != 0) {
			imposto += pimposto * 0.28;
			pimposto = 0;
		}
		
		printf("R$ %.2lf\n", imposto);
	}
	
	return 0;
}
