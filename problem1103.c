#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int H1, M1, H2, M2, count = 0, i;
	
	scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
	
	while(M1 != 0 || M2 != 0 || H1 != 0 || H2 != 0)
	{
	    while(M1 != M2 || H1 != H2)
	    {
		    M1++;
		    if(M1 == 60)
		    {
			    M1 = 0;
			    H1++;
			
			    if(H1 == 24)
			    H1 = 0;
		    }
		
		    count++;
	    }
	    
		printf("%d\n", count);
	    count = 0;
	    
	    scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
    }
	
	return 0;
}
