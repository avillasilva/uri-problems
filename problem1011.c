#include <stdio.h>
#include <stdlib.h>

int main() {
	double pi = 3.14159, r, v;
	
	scanf("%lf", &r);
	v = (4.0/3) * (pi) * (r*r*r);
	printf("VOLUME = %.3lf\n", v);
    
	return 0;
}
