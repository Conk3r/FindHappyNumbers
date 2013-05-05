#include <stdio.h>
#include <stdlib.h>


int endTest ()
{	int i = 0;
	while ( i < 100)
		{
		if(i == 20)
			return 0;
		printf("%d \n",i);
		i++;		
		}
}

int  main()
{
	int o ;
	o = endTest();

	printf("\n\n%d \n",o);

return 0;
}


