#include <stdio.h>

typedef struct student {
	int kor;
	int math;
	int eng;
	double average;
}dukyoung; // typedef Ÿ�� �̸��� ������ �� ���⼱ ����ü ���� 

int main() {
	
	dukyoung person[5];
	
	int i,j=1;
	
	for (i=0; i<5; i++) {
		scanf("%d %d %d",&person[i].kor, &person[i].math, &person[i].eng);
		person[i].average = (person[i].kor + person[i].math + person[i].eng / 3.0);
	}
	
	for (i=0; i<5; i++){
		printf("%d %lf\n",j++,person[i].average);
	}	
	
	
	return 0;
}
