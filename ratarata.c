#include <stdio.h>
int main ()
{
	int n, a, jumlah=0;
	float ratarata;
	scanf ("%d" ,&n);
	for (int i=0; i<n; i++)
	{
		scanf ("%d" ,&a);
		jumlah+=a;
	}
	ratarata=(float)jumlah/n;
	printf ("%.3f\n" ,ratarata);
	return 0;
}
