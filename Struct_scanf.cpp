#include <stdio.h>

struct student {
	int kor;
	int math;
	int eng;
	double average;
};

int main() {
	
	struct student person;
	scanf("%d",&person.kor);
	scanf("%d",&person.math);
	scanf("%d",&person.eng);
	person.average = (person.kor + person.math + person.eng / 3.0);
	
	printf("%d %d %d %lf",person.kor, person.math, person.eng,person.average);
	
	return 0;
}
