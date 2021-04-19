#include <stdio.h>

int Facto(int n) {
	if ( n == 0) {
		return 1;
	}
	
	return n * Facto(n-1);
}

int main() {
	
	int n;
	
	scanf("%d",&n);
	
	printf("%d",Facto(n));
	
	return 0;
}
