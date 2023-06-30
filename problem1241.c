#include <stdio.h>
#include <string.h>

int main() {
    int n, check;
    char a[1000], b[1000];
    
    scanf("%d", &n);
 
    while(n > 0) 
    {
	scanf("%s %s", a, b);
	
	check = 1;
	
	if(strlen(b) > strlen(a))
	   check = 0; 

	else 
	{
	    int i = strlen(a) - 1, j = strlen(b) - 1;
	   
	    while(j >= 0)
	    {	    
		if(a[i] != b[j])
		{
		    check = 0;
		}

		i--;
		j--;
	    } 
	}

	if(check)
	    printf("encaixa\n");
	
	else
	    printf("nao encaixa\n");
	
	n--;
    }		    

    return 0;
}
