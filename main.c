#include <stdio.h>
#include <string.h>

//Kieran's basic arithmetic calculator written in C.

int main() 
{
	printf("What do you want to do?\n");
	printf("\nadd\nsubtract\nmultiply\ndivide\n\n");

	char input[8];
	scanf("%s",input);	
	
	if (strcmp(input, "add") == 0) {
		add();
	} 
	else if (strcmp(input, "subtract") == 0 ) {
		subtract();	
	}
	else {
		printf("Invalid input\n");
	}
}

int add(int num1, int num2) 
{
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	
	int sum = num1 + num2;
	printf("%d\n", sum);
}

int subtract(int num1, int num2)
{
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);

	int difference = num1 - num2;
	printf("%d\n",difference);
}

int notImplemented()
{
	printf("\nNot yet implemented!\n");
}
