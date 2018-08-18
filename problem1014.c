#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int X = 60, Y = 90, Z = Y, d, i;
	scanf("%d", &d);
	
	for(i = 0; Y < Z+d; i++){
		if(i % 2 == 0)
		Y+=1;
	}
	
	i++;
	printf("%d minutos\n", i);
	
	return 0;
}
