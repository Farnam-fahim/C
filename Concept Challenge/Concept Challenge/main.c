#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



void menu();
void helloworld();
void info();
int measure();
int even();
int average();
int power();
int square();




int main() {
	menu();
	helloworld();
	info();
	measure();
	even();
	average();
	power();
	square();


	system("pause");
	return(0);
}

void menu() {
	int option;
	puts("1 - Hello World");
	puts("2 - What is your information?");
	puts("3 - Min, Max and Average");
	puts("4 - Addition of even numbers");
	puts("5 - What are your grades?");
	puts("6 - Calculation of any numbers to power 2");
	puts("7 - Calculation of square root");
	puts("8 - Close the menu");
	scanf("%d", &option);
	switch (option) {
	case 1:
		helloworld();
		menu();
		break;
	case 2:
		info();
		menu();
		break;
	case 3:
		measure();
		menu();
		break;
	case 4:
		even();
		menu();
		break;
	case 5:
		average();
		menu();
		break;
	case 6:
		power();
		menu();
		break;
	case 7:
		square();
		menu();
		break;
	default:
		exit(0);
		break;
	}
}

	void helloworld() {
		printf("Hello World\n");
	}

	void info() {
		int age;
		printf("How old are you?");
		scanf("%d", &age);

		char name[24];
		printf("What is your name?");
		scanf("%s", &name);

		char country[20];
		printf("Where do you live?");
		scanf("%s", &country);

			printf("Hello %s, you are %d years old and you live in %s\n", name, age, country);
	}

	int measure() {
		int a[1000], i, n, min, max;

		printf("Enter size of the array : ");
		scanf("%d", &n);

		printf("Enter elements in array : ");
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		min = max = a[0];
		for (i = 1; i < n; i++)
		{
			if (min > a[i])
				min = a[i];
			if (max < a[i])
				max = a[i];
		}
		printf("minimum of array is : %d\n", min);
		printf("maximum of array is : %d\n", max);
		return(0);
	}

	int even() {
		int a, b, sum = 0;

		printf("Enter the value of num a\n");
		scanf("%d", &a);
		printf("Enter the value of num b\n");
		scanf("%d", &b);
		for (a = 0; a < (b+1); a++)
		{
			if (a % 2 == 0)
				sum = sum + a;
		}
		printf("Sum of all Even Integers is %d\n", sum);
		return(0);
	}

	int average() {
		int a, b, c, sum = 0;
		printf("insert first grade\n");
		scanf("%d", &a);
		printf("insert second grade\n");
		scanf("%d", &b);
		printf("insert third grade\n");
		scanf("%d", &c);
		
		sum = (a + b + c) / 3;

		printf(" Your average is %d\n", sum);

		if (sum >= 60)
		{
			printf("Pass\n");
		}
		else
		{
			printf("Fail\n");
		}
		return(0);

	}

	int power() {
		int a, b;
		printf("insert first number\n");
		scanf("%d", &a);
		printf("insert second number\n");
		scanf("%d", &b);

		printf("%.2f\n", pow(a, b));

		return(0);
	}

	int square() {
		double a;
		printf("insert first number\n");
		scanf("%lf", &a);

		printf("%.2lf\n", sqrt(a));

		return(0);
	}
