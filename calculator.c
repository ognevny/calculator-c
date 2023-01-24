#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

void catch_int(int sig_num) {
    signal(SIGINT, catch_int);
    printf("\n\nCaught UNIX SIGINT\n");
	fflush(stdout);
	exit(1);
}

int main() {	
	signal(SIGINT, catch_int); 

	char operator[1];	
	int number1; 		
	int number2;	
	
	printf("Enter expression: ");
	scanf("%d",&number1);
	scanf("%s",operator);
	scanf("%d",&number2);
	printf("%d %s %d",number1,operator,number2);
	
	if (strcmp(operator, "+") == 0) { 		
		int sum = number1 + number2;
		printf(" = %d\n", sum);
		main();
	}
	else if (strcmp(operator, "-") == 0) {	
		int difference = number1 - number2;
		printf(" = %d\n",difference);
	 	main();
	}
	else if (strcmp(operator, "*") == 0) {	
		int product = number1 * number2;
		printf(" = %d\n",product);
	 	main();
	}
	else if (strcmp(operator, "/") == 0) {	
		int quotient = number1 / number2;
		printf(" = %d\n",quotient);
	 	main();
	}
}
