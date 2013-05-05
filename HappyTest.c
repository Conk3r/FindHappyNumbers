#include <stdlib.h>
#include <stdio.h>
#include "UProgs.c"

int main()
{	
	int x;
	int z = 1;	
	printf("Bitte geben sie eine obere Grenze ein:\n");
	scanf("%d", &x);
	printf("\n\n Die glücklichen Zahlen, die im Bereich von 0 bis %d liegen lauten :\n",x);

	while ( z <= x)
		{
		TestHappy(z);
		
		z++;
		}

return 0;
}
