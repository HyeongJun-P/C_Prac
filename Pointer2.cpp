#include <stdio.h>

int main() {
	int Num1 = 200, Num2 = 300;
	int *a;
	a = &Num1;
	(*a) += 40;
	a = &Num2;
	(*a) -=50;
	printf("%d %d", Num1, Num2);
	return 0;
}
