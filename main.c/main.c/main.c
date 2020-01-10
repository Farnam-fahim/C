#include "Minus.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
	int first = 0;
	int second = 0;

	puts("Enter first number");
	scanf_s("%d", &first);

	puts("Enter second number");
	scanf_s("%d", &second);

	printf("total is %d\n", sub(first, second));

	system("pause");
	return 0;
}