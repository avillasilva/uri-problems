#include <stdio.h>

int main () {
	int m, n, sum;
	
	scanf("%d %d", &m, &n);
	
	while (m > 0 && n > 0) {
		
		sum = 0;
		
		if (m > n) {
			while (n <= m) {
				printf("%d ", n);
				sum += n;
				n++;
			}
		} else {
			while (m <= n) {
				printf("%d ", m);
				sum += m;
				m++;
			}
		}
		
		printf("Sum=%d\n", sum);
		
		scanf("%d %d", &m, &n);
	}
	
	return 0;
}
