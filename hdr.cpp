#include <stdio.h>

int hdr(int num) {
	if ( num <= 0) {
		return 1;
	}
	printf("%d",num);
	hdr(num-1);
}

int main() {
	
	hdr(5);
	
	return 0;
}
