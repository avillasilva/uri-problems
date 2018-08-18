#include <stdio.h>

int main () {
	int i, count = 0;
	double num;
	
	for (i = 0; i < 6; i++) {
		scanf("%lf", &num);
		
		if (num > 0)
			count++;
	}
	
	printf("%d valores positivos\n", count);
	
	return 0;
}
