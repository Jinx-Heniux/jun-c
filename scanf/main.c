#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test1();
void runnian();

int main()
{
	/*test1();*/

	runnian();
}

void test1() {
	int i1;
	printf("Input an integer: ");
	scanf("%d", &i1);
	printf("i1: %d\n", i1);

	char c1;
	printf("Input a character: ");
	scanf("%c", &c1);
	printf("c1: %c", c1);

	int i2;
	printf("Input an integer: ");
	scanf("%d", &i2);
	printf("i2: %d\n", i2);

	float f1;
	printf("Input a float number: ");
	scanf("%f", &f1);
	printf("f1: %f\n", f1);
}

void runnian() {
	int year;
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("yes");
	}
	else {
		printf("no");
	}
}