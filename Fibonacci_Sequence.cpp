#include <stdio.h>

int main() {
	
	int i, n, t1 = 0, t2 = 1, nextTerm;
	printf("출력할 피보나치 수열의 항의 N항 : ");
	scanf("%d",&n);
	printf("피보나치 수열 : ");
	
	for ( i = 1; i <= n; ++i) {
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}	
	
	return 0;
}
