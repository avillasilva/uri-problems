#include <stdio.h>

int main () {
	double num, media = 0;
	int quant = 0, i;
	
	for (i = 0; i < 6; i++) {
		scanf("%lf", &num);
		
		if (num > 0) {
			quant++;
			media += num;
		}	
	}
	
	media /= quant;
	
	printf("%d valores positivos\n", quant);
	printf("%.1lf\n", media);
	
	return 0;
}
