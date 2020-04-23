#include <stdio.h>
int main() {
	int n, c=0, nilai, sum=0, x=0;
	scanf ("%d" ,&n);
	while (c<=n) {
		scanf ("%d" ,&nilai);
		if (nilai==-1 || nilai==-99) x+=1;
		if (nilai==-99) break;
		if (nilai==-1) continue;
		if (nilai!=-1 || nilai!=-99) sum+=nilai;
	c++;
	}
	printf ("%d %d\n" ,x, sum+=n);
	return 0;
}
