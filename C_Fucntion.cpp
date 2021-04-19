#include <stdio.h>


int Games(int pHP, int pAT, int mHP, int mAT) {
	while (1) {
		printf("mAT : %d, pHP-mAT : %d", mAT, pHP - mAT);
		if (pHP <= 0) {
			return 1;
		}
		printf("pAT : %d, mHP-pAT : %d", pAT, mHP - pAT);
		if (mHP <= 0) {
			return 2;
		}
	}
}

int main() {

	int pHP, pAT, mHP, mAT, result;

	printf("pHP : ");
	scanf("%d", &pHP);

	printf("pAT : ");
	scanf("%d", &pAT);

	printf("mHP : ");
	scanf("%d", &mHP);

	printf("mAT : ");
	scanf("%d", &mAT);

	if (result == 1) {
		printf("P Lose");
	}
	else {
		printf("P Win");
	}
	return 0;
}
