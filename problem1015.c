#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int X, Y;
	float resultado;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	resultado = (Y/12.0)*X;
	printf("%.3f\n", resultado);
	
	return 0;
}
