#include <stdio.h>
#define K 5

int main() {
	int n = 0;
	int b[K] = {1,0,1,1,0}, temp;
	int i,j;
	
	for (i = 0; i<K; i++) {
		temp = 1;
		for ( j = 1; j <= K-1-i; j++) {
			temp = temp * 2;
		}
	n = n + temp* b[i];
	}
	
	printf("%d", n);
	
	return 0;
}
