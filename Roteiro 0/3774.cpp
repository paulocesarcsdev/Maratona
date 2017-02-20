#include <stdio.h>
	int main () {
	int n,contador, aux;
	scanf("%d", &n);
	aux = 1;
	for(contador = 1; contador >= n; contador--){
         aux *= contador;
        }
    printf("%d", &aux);
	}
