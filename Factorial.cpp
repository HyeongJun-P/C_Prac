#include <stdio.h>

int Facto(int n) {
	
	if ( n == 1) {
		return 1;
	}
	return n * Facto (n-1);
}

int main() {
	
	printf("%d",Facto(9));
	
	return 0;
}
