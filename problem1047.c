#include <stdio.h>

int main() {
	int horai, minutoi, horaf, minutof, horas, minutos;
		
	scanf("%d %d %d %d", &horai, &minutoi, &horaf, &minutof);
	
	horas = 0;
	minutos = 0;
	
	if (horai == horaf) {
		
		if (minutoi == minutof)
			horas = 24;
	
		else if (minutoi > minutof) {
			horas = 23; 
			minutos = (60 - minutoi) + minutof;
		}
		
		else
			minutos = minutof - minutoi;
	}
	
	if (horai > horaf) {
		
		if (minutoi == minutof)
			horas = (24 - horai) + horaf;
	
		else if (minutoi > minutof) {
			horas = (24 - horai) + horaf - 1; 
			minutos = (60 - minutoi) + minutof;
		}
		
		else {
			horas = (24 - horai) + horaf;
			minutos = minutof - minutoi;
		}
	}
	
	if (horai < horaf) {
		
		if (minutoi == minutof)
			horas = horaf - horai;
	
		else if (minutoi > minutof) {
			horas = horaf - horai - 1;  
			minutos = (60 - minutoi) + minutof;
		}
		
		else {
			horas = horaf - horai;
			minutos = minutof - minutoi;
		}
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	
	return 0;
}
