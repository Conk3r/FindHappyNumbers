#include <stdio.h>
#include <stdlib.h>

int zehnhoch (int z)
	{
	int quad = 10;	
	while(z > 0)
		{
		
		quad= quad * 10;
		z--;		
		}
	
	return quad;
	}

int quersumme( int x, int n)
{	
	int Stl = n ;
	int Teile[n] ;
	int e;
	int summe = 0;

	/*	Ziffern der Zahl ins Array "Teile" geben	*/
	while ( Stl > 0)
	{	e = zehnhoch( Stl -1);
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

	/*	Einzelne Ziffern quadrieren und aufsummieren	*/
	while(Stl < n)
	{
	summe = summe + Teile[Stl] * Teile[Stl];
	Stl++;
	}
	return summe ;
}

int Stellen (int x)
{
	int k = 0;
	int found = 0;
	while ( found == 0)
	{
	if( zehnhoch(k) > x)
		found = 1;
	k++;
	}
	return k;
}

int TestHappy(int x){
	
	int n ;
	int q =x;
	int i = 0;

	while(i < 1000)
	{
	n = Stellen (q);
	q = quersumme (q,n);
	
	if ( q == 1)
		{
		printf("%d\n",x);
		return 0;
		}
	if ( q == x || q == 4)
		{
		return 0;
		}
	else
		i++;
	}
return 1;
}

