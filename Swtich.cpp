#include <stdio.h>

int main() {
	
	int x;
	
	scanf("%d",&x);
	
	switch(x) {
		case 1: printf("1번 선택"); 
			break;
		case 2: printf("2번 선택"); 
			break;
		case 3: printf("3번 선택"); 
			break;
		default: printf("잘못 선택");
	}
	
	return 0;
}
