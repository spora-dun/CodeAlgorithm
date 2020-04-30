#include <stdio.h>
int main ()
{
	int n, angka, selisih=0, c=0, max=0;
	scanf ("%d" ,&n);
	while (c<n)
	{
		scanf ("%d" ,&angka);
		selisih=abs(selisih-angka);
		if (selisih<0) selisih*=-1;
		if (selisih>max) max=selisih;
		selisih=angka;
		++c;
	}
	printf ("%d\n" ,max);
	return 0;
}
