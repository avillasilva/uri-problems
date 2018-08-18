#include <stdio.h>

int main () {
	int i, j, adder, count;
	
	i = 0;
	j = 1;
	adder = 0;
	count = 0;
	
	do
	{
		for (count = 0; count < 3; count++)
		{
			if ((adder == 0 || adder == 10) && i <= 2)
			{
				
				printf("I=%d J=%d\n", i, j+count);		
			}
			
			else
				printf("I=%d.%d J=%d.%d\n", i, adder, j+count, adder);
		}

		adder += 2;
		
		if (adder == 10 && i < 2) 			
		{
			i++;
			j++;
			adder = 0;
		}
			
	} while (i != 2 || adder == 0);
	
	return 0;
}
