#include <stdio.h>

int main() {
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