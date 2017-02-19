#include <cstdio>
int main(){
	int H, KMH;
	double KML;
	scanf("%d %d", &H, &KMH);
	KML = H * KMH/12.0;
	printf("%.3lf\n", KML);
	return 0;
}
