#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Badly written calculator.
//I will refactor it with switch statements eventually.
int main() {
	printf("What do you want to do?\n");
	printf("\nadd\nsubtract\nmultiply\ndivide\nexit\n");

	char input[8];
	scanf("%s",input);	
	
	if (strcmp(input, "add") == 0) {
		add();
	} 
	else if (strcmp(input, "subtract") == 0 ) {
		subtract();	
	}
	else if (strcmp(input, "multiply") == 0 ) {
		multiply();	
	}
	else if (strcmp(input, "divide") == 0 ) {
		divide();	
	}
	else if (strcmp(input, "exit") == 0 ) {
		printf("Exited with exit(1)");
		exit(1);	
	}
	else {
		printf("Invalid input\n");
	}

}
int add(int num1, int num2) {
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	
	int sum = num1 + num2;
	printf("%d\n", sum);
	 main();
}

int subtract(int num1, int num2){
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);

	int difference = num1 - num2;
	printf("%d\n",difference);
	 main();
}

int multiply(int num1, int num2) {
	printf("Enter two integers:");
	scanf("%d %d", &num1, &num2);
	
	int product = num1 * num2;
	printf("%d\n",product);
	 main();
}

int divide(int num1, int num2) {
	printf("Enter two integers: ");
	scanf("%d %d", &num1,&num2);

	float quotient = num1 / num2;
	printf("%f\n",quotient);
}
