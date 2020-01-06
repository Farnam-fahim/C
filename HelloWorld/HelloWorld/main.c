#include <stdio.h>
#include <stdlib.h>


void ageandname();


//void hello();//FUNTION PROTOTYPE
//
//
//int main() { //Comments
//
//	hello(); //function signature
//
//	//printf("Hello World\n");
//
//	char yourName[20];//The last character of an array is null
//
//	/*printf("what is your name?");
//	scanf("%s", &yourName);
//	printf("Hello %s \n", yourName);*/
//
//	/*strcpy(yourName, "Hello Farnam");
//
//	printf("%s\n", yourName);
//*/
//
//	int number = 10;//Type integer 32bit data including negative
//	char initial = 'a';//single character indicated always with single quotation
//	float pi = 3.14;//This is for real numbers - 32bit data
//	double coffee = 2.55;//This is real numbers 64bit data
//
//	/*printf("My integer is %d My char is %c My float is %.2f My double is %.4lf", number, initial, pi, coffee);
//	puts("");
//
//	printf("The size of my number is %zu bytes\n", sizeof(number));
//	printf("The size of my initial is %zu bytes\n", sizeof(initial));
//	printf("The size of my pi is %zu bytes\n", sizeof(pi));
//	printf("The size of my coffee is %zu bytes\n", sizeof(coffee));*/
//
//	//DATA Types
//
//	//printf("This \t is\t tab\n");//TAB
//	//printf("This is Backspace \b\n");//backspace
//	//printf("This is alert sound\a\n");//ALERT!!
//
//	system("pause");
//	
//	return 0;
//}
//
//
//
//
////void hello() { //function declaration
////
////	puts("Hi, I'm a function");
////}
//
int main() {
	ageandname();

	int age;

	printf("How old are you?");
	scanf("%d", &age);

	char name[20];

	printf("What is your name?");
	scanf("%s", &name);
	printf("Hello %s, you are %d years old \n", name, age);

	system("pause");
}

void ageandname() {

}
