#include <stdio.h>

/* Solution of the problem 1113 from URI */

main(){
	int x, y;
	
	scanf("%d %d", &x, &y); 
	
	while (x != y) {
		if (x < y)
			printf("Crescente\n");
		
		else
			printf("Decrescente\n");
		
		scanf("%d %d", &x, &y);
	}
}
