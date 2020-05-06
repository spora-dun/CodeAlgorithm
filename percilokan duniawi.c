#include <stdio.h>
int main ()
{
	int a, b, c;
	int x=0, y=0, z=0;
	scanf ("%d %d %d" ,&a, &b, &c);
	while (x<a) 
	{
		printf ("*\n");
		x++;
	}
	while (y<b)
	{
		printf (" *\n");
		y++;
	}
	while (z<c)
	{
		printf ("  *\n");
		z++;
	}
	return 0;
}
