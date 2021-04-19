#include <stdio.h>

int hrd(int num) {
	if (num <= 0)
		return 1;
	printf("%d",num);
	hrd(num - 1);
}

main() {
	hrd(5);
	return 0;
}
