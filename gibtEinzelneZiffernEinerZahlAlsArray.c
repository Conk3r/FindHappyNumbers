#include <stdio.h>
#include <stdlib.h>

int quadrat (int z)
	{
	int quad = 10;	
	while(z > 0)
		{
		
		quad= quad * 10;
		z--;		
		}
	
	return quad;
	}

int main()
{	
	int Stl = n ;
	int Teile[n] ;
	int e;
	
	while ( Stl > 0)
	{	e = quadrat( Stl -1);
		Teile[Stl] = (x - (x % e) )/ e ;
		x = x - (x - (x % e) );
		Stl--;
	}
	
	Teile[0] = x%10;
	
	/*int b = n-1;
	while ( b >= 0)
	{
		printf("%d\n",Teile[b]);
		b--;
	}
	*/
	return Teile;

}

