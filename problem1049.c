#include <stdio.h>
#include <string.h>

int main() {
	char subfilo[20], classe[20], alimento[20];

	scanf("%s %s %s", &subfilo, &classe, &alimento);
	
	if (!(strcmp(subfilo, "vertebrado")) && !(strcmp(classe, "ave")) && !(strcmp(alimento, "carnivoro"))) 
		printf("aguia\n");
		
	if (!(strcmp(subfilo, "vertebrado")) && !(strcmp(classe, "ave")) && !(strcmp(alimento, "onivoro"))) 
		printf("pomba\n");
		
	if (!(strcmp(subfilo, "vertebrado")) && !(strcmp(classe, "mamifero")) && !(strcmp(alimento, "onivoro"))) 
		printf("homem\n");
	
	if (!(strcmp(subfilo, "vertebrado")) && !(strcmp(classe, "mamifero")) && !(strcmp(alimento, "herbivoro"))) 
		printf("vaca\n");

	if (!(strcmp(subfilo, "invertebrado")) && !(strcmp(classe, "inseto")) && !(strcmp(alimento, "hematofago"))) 
		printf("pulga\n");	
	
	if (!(strcmp(subfilo, "invertebrado")) && !(strcmp(classe, "inseto")) && !(strcmp(alimento, "herbivoro"))) 
		printf("lagarta\n");

	if (!(strcmp(subfilo, "invertebrado")) && !(strcmp(classe, "anelideo")) && !(strcmp(alimento, "hematofago"))) 
		printf("sanguessuga\n");
		
	if (!(strcmp(subfilo, "invertebrado")) && !(strcmp(classe, "anelideo")) && !(strcmp(alimento, "onivoro"))) 
		printf("minhoca\n");
		
	return 0;
}
