#include <stdio.h>

int main () {
	int N;
	double x, y, z, MedPond;
	
	scanf("%d", &N);
	
	while (N > 0) {
		scanf("%lf %lf %lf", &x, &y, &z);
		MedPond = ((x * 2) + (y * 3) + (z * 5)) / 10;
		printf("%.1lf\n", MedPond);
		N--;
	}
	
	return 0;
}
