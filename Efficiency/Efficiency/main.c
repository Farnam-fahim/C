#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int measure();

int main() {
	measure();

	system("pause");
	return(0);
}

int measure() {
	int num1, num2, num3, max;
	printf("enter three numbers\n");
	scanf("%d%d%d", &num1, &num2, &num3);

	if (num1>num2>num3)
	{
		printf("maximum is %d\n", num1);
	}
	else if (num2>num3>num1)
	{
		printf("maximum is %d\n", num2);
	}
	else
	{
		printf("maximum is %d\n", num3);
	}
}