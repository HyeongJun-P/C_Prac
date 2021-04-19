#include <stdio.h>

int main() {
	int Num1 = 16, Num2 = 44;
	int a = Num1++;
	int b = --Num2;
	printf("%d", a+b);
	return 0;
}
