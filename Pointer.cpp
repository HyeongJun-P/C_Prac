#include <stdio.h>

int main() {
	
	int *NumPtr, Num = 10;
		
	NumPtr = &Num;
	
	printf("%p\n",NumPtr); // Num의 주소값 
	printf("%p\n",&Num); // & =  주소값 
	printf("%d\n",*NumPtr); // Num의 값 
	
	
	
	
	
	return 0;
}
