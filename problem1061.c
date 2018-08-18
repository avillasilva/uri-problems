#include <stdio.h>

int main () {
	int diai, horai, minutoi, segundoi, diaf, horaf, minutof, segundof;
	int dias = 0, horas = 0, minutos = 0, segundos = 0;
	char aux[30];
	
	fflush(stdin);
	scanf("%s %d", &aux, &diai);
	scanf("%d : %d : %d", &horai, &minutoi, &segundoi);
	fflush(stdin);
	scanf("%s %d", &aux, &diaf);
	scanf("%d : %d : %d", &horaf, &minutof, &segundof);
	
	segundos = segundof - segundoi;
	minutos = minutof - minutoi;
	horas = horaf - horai;
	dias = diaf - diai;
	
	if (segundos < 0) {
		segundos += 60;
		minutos--;
	}
	
	if (minutos < 0) {
		minutos += 60;
		horas--;
	}
	
	if (horas < 0) {
		horas += 24;
		dias--;
	}
	
	printf("%d dia(s)\n", dias);
	printf("%d hora(s)\n", horas);
	printf("%d minuto(s)\n", minutos);
	printf("%d segundo(s)\n", segundos);
	
	return 0;
}
