#include <stdio.h>

int main() {
	
	int *NumPtr, Num = 10;
		
	NumPtr = &Num;
	
	printf("%p\n",NumPtr);
	printf("%d\n",*NumPtr);
	
	printf("%p\n",&Num);
	
	
	
	return 0;
}
