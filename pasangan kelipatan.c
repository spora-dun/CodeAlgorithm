#include <stdio.h>
int main ()
{
	int n, a, b, x=0;
	scanf ("%d" ,&n);
	while (n--)
	{
		scanf ("%d %d" ,&a, &b);
		a%=b;
		if (a==0) x++;
		b%=a;
		if (b==0) x++;
	}
	printf ("%d\n" ,x);
	return 0;
}
