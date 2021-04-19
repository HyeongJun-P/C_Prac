#include <stdio.h>

int main() {
	int Num1 = 16, Num2 = 80;
	printf("%d", Num1 > Num2 ? Num1 & Num2 : Num1 ^ Num2);
	return 0;
}
