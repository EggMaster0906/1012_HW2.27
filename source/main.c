#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int high = 5;
	
	for (int i = 1; i <= high; i++)
	{
		for (int blank = 1; blank <= high-i; blank++)
		{
			printf(" ");
		}
		for (int star = 1; star <= 2*i-1; star++)
		{
			printf("*");
		}

		printf("\n");
	}
}