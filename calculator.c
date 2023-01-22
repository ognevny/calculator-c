#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

void catch_int(int sig_num) 
{	//Catches UNIX SIGINT (ctrl+c)
    signal(SIGINT, catch_int);
    printf("\n\nCaught UNIX SIGINT, exiting.\n");
	fflush(stdout);
	exit(1);
}

int main() 
{	//Awaits UNIX SIGINT (ctrl+c)
	signal(SIGINT, catch_int); 

	char operator[1];	
	int number1; 		
	int number2;	
	
	//enter an expression. eg: "5 + 4"
	printf("Enter expression: ");
	scanf("%d",&number1);
	scanf("%s",operator);
	scanf("%d",&number2);
	printf("%d %s %d",number1,operator,number2);
	
	//loop to determine operator
	if (strcmp(operator, "+") == 0) 
	{ 		//if operator is add
		int sum = number1 + number2;
		printf(" = %d\n", sum);
		main();
	}
	else if (strcmp(operator, "-") == 0) 
	{	//if operator is subtract
		int difference = number1 - number2;
		printf(" = %d\n",difference);
	 	main();
	}
	else if (strcmp(operator, "*") == 0) 
	{	//if operator is multiply
		int product = number1 * number2;
		printf(" = %d\n",product);
	 	main();
	}
	else if (strcmp(operator, "/") == 0) 
	{	//if operator is multiply
		int quotient = number1 / number2;
		printf(" = %d\n",quotient);
	 	main();
	}
}