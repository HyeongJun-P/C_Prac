#include <stdio.h>

int main() {
	
	int a;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 7 ==0) {
		printf("3�� 7�� ���");
	} else {
		printf("�װ� �ƴ�");
	}
	
	return 0;
}
