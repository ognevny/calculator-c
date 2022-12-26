#include <stdio.h>
#include <string.h>
int main() 
{
	printf("What do you want to do?\n");
	printf("\nAdd\nMinus\nMultiply\nDivide\n");

	char input[3];
	scanf("%s",input);	
	
	if (strcmp(input, "add") == 0) {
		add();
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
	
	//Outputs the sum of the inputs
	printf("%d\n", sum);
	
}

