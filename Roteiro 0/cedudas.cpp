#include <cstdio>
#include <cmath>
	int main () {
	int a, b, c, d, e, f, g, v;
	scanf("%d", &v);
	a = (v % 10);
	b = (v / 10) % 10;
	c = (v / 100) % 10;
	d = (v / 1000) % 10;
	e = (v / 10000) % 10;  
	f = (v/  100000) % 10;
	g = (v/  1000000) %10;
	printf("%d  nota(s) de R$ \n",a);
	printf("%d  nota(s) de R$ \n",b);
	printf("%d  nota(s) de R$ \n",c);
	printf("%d  nota(s) de R$ \n",d);
	printf("%d  nota(s) de R$ \n",e);
	printf("%d  nota(s) de R$ \n",f);
	printf("%d  nota(s) de R$ \n",g);



return 0;
}
