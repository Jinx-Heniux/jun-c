#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printf1();
void scanf1();
void runnian1();
void scanfwhile1();
void scanfwhile2();
void scanfif1();
void multiscanf1();
void printf2();

int main()
{
	/*
	printf1();
	scanf1();
	runnian1();
	scanfwhile1();
	scanfwhile2();
	scanfif1();
	multiscanf1();
	*/
	printf2();
}

void printf1() {
	int i1 = 3;
	i1 = 5;
	printf("i1: %d\n", i1);

	printf("string: Hello World!\n");

	float f1 = 3e-3;
	printf("f1: %f\n", f1);

	char c1 = 'a';
	c1 = c1 - 32;
	printf("c1: %c\n", c1);

	if ('\0' == 0) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}

	int i2 = 5;
	float f2 = i2 / 2;
	float f3 = (float)i2 / 2;
	printf("f2: %f\n", f2);
	printf("f3: %f\n", f3);

	return 0;
}

void scanf1() {
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

void runnian1() {
	int year;
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("yes");
	}
	else {
		printf("no");
	}
}

void scanfwhile1() {
	int i;
	// printf("%d", i); // 错误，uninitialized local variable 'i' used
	scanf("%d", &i);
	printf("i=%d\n", i);
	while (i != 0) {
		scanf("%d", &i);
		printf("i=%d\n", i);
	}
}

void scanfwhile2() {
	int i, re;
	while (rewind(stdin), (re = scanf("%d", &i)) != EOF) { // while (scanf("%d", &i))
		printf("re=%d, i=%d\n", re, i);
	}
}

void scanfif1() {
	char c;
	while (scanf("%c", &c) != EOF) {
		if (c != '\n') {
			printf("%c", c - 32);
		}
		else {
			printf("\n");
		}

	}
}

void multiscanf1() {
	int i;
	char c;
	float f;
	int ret;
	ret = scanf("%d %c%f", &i, &c, &f);
	printf("i=%d, c=%c, f=%f", i, c, f);
	return 0;
}

void printf2() {
	printf("i=%d, s=%s, c=%c, f=%4.2f", 1, "abc", 'a', 999.777);
}