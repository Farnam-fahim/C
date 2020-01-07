#include <stdio.h>
#include <stdlib.h>


int MySum(int a, int b);

int main() {

	/*int x = 0;
	while (x < 11)
	{
		printf("%d", x);
		x += 1;
		}

	printf("__\n\n");
	do

	{
		x += 1;
		if (x == 5) break;

		printf("%d", x);

	} while (x < 11);*/

	int a;
	int b;
	printf("insert first number\n");
	scanf("%d", &a);
	printf("insert second number\n");
	scanf("%d", &b);


	MySum(a, b);
	


	system("pause");

}

int MySum(int a, int b) {
	
	int multi = 0;
	
	for (a; a<(b+1); a++)
	{
		multi = multi + a;
	}
	printf("%d\n", multi);
	return multi;
	
}

//int main() {
//
//	printf("1.Book seats\n");
//
//	printf("2.buy seats\n");
//
//	printf("3.buy seats\n");
//
//	printf("5.buy seats\n");
//
//	printf("6.buy seats\n");
//
//	printf("7.buy seats\n");
//
//	printf("8.buy seats\n");
//
//
//		system("pause");
//}
