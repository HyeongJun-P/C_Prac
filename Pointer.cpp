#include <stdio.h>

int main() {
	
	int *NumPtr, Num = 10;
		
	NumPtr = &Num;
	
	printf("%p\n",NumPtr); // Num�� �ּҰ� 
	printf("%p\n",&Num); // & =  �ּҰ� 
	printf("%d\n",*NumPtr); // Num�� �� 
	
	
	
	
	
	return 0;
}
