#include <stdio.h>

int Fibo (int n) {
	if ( n == 0 ) {
		return 0;
	} else if ( n == 1) {
		return 1;
	} else {
		return Fibo(n-1) + Fibo(n-2);
	}
}

int main() {
																														
	int n, i;
	printf("피보나치 : ");
	scanf("%d",&n);
	
	for ( i = 0; i <= n ; i++) {
		printf("%d, ", Fibo(i));
	}
	
	return 0;
}
