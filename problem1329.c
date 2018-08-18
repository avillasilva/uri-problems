#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N = 1, R, mary = 0, john = 0, i;
	
	while(N != 0)
	
	{
		scanf("%d", &N);
		
		if (N != 0)
	    {
		    for (i = 0; i < N; i++)
		
		    {
		        scanf("%d", &R);
		
		        if (R == 0)
		        mary += 1;
		
		        else
		        john += 1;
	        }
	    
	        printf("Mary won %d times and John won %d times\n", mary, john);
	    
		    mary = 0;
		    john = 0;
		}
	}
	
	return 0;
}
