#include <stdio.h>

int main() {
	
	int a;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 7 ==0) {
		printf("3과 7의 배수");
	} else {
		printf("그거 아님");
	}
	
	return 0;
}
