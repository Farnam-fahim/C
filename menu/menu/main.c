#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


//void rain();
//
//int main() {
//
//	rain();
//
//	system("pause");
//
//}
//
//void rain() {
//
//	int input;
//	puts("Is it raining?");
//	puts("press 1 - yes");
//	puts("press 2 - no");
//	puts("press 3 - I live in Vancouver");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		puts("Take your umberella");
//		rain();
//	}
//	else if (input == 2)
//	{
//		puts("do not take it");
//		rain();
//	}
//	else if (input == 3)
//	{
//		puts("always take it");
//		rain();
//	}
//	else if (input == 0) {
//		puts("goodbye");
//
//	}
//	else
//	{
//		puts("not valid");
//		rain();
//	}
//
//
//
//}

void menu();

int main() {
				
	_Bool hello = 1;
	printf("This is the standard bool defined as true %d\n", hello);

	bool hi = false;
	printf("This is the standard Bool defined as true %d\n", hi);

	menu();

		printf("%.2f\n", sqrt(900));

		printf("%.2f\n", pow(4, 2));

		printf("%.2f\n", cbrt(27));

		printf("%.2f\n", ceil(9.1));

	

	system("pause");
	return(0);

}

void menu() {
	int option;
	puts("1 - do smth");
	puts("2 - do smth");
	puts("3 - do smth");
	puts("4 - do smth");
	puts("5 - reset");
	scanf("%d", &option);
		switch (option) {
	case 1:
		printf("you choose option 1\n");
		menu();
		break;
	case 2:
		printf("you choose option 2\n");
		menu();
		break;
	case 3:
		printf("you choose option 3\n");
		menu();
		break;
	case 4:
		printf("you choose option 4\n");
		menu();
		break;
	case 5:
		menu();
		break;
	default:
		exit(0);
		break;
	}
}