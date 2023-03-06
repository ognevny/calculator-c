#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

void catch_int(int sig_num) 
{
    signal(SIGINT, catch_int);
    printf("\n\nCaught CTRL-C SIGINT\n");
    fflush(stdout);	
    exit(1);

}

int main(int argc, char *argv[])
{
	const char NAME[] = "calculator";
	const float VERSION = 0.3;

    if (argc > 1)
    {
        if (strcmp(argv[1],"-v") == 0) {
		printf("%s %f",NAME, VERSION);
			exit(EXIT_SUCCESS);
		}
		if (strcmp(argv[1],"-r") == 0) {
			printf("Attempting to open default browser (xdg-open)\n");
			system("xdg-open https:/github.com/kierancrossland/calculator-c");
			exit(EXIT_SUCCESS);
		} 
		if (strcmp(argv[1],"-w") == 0) {
			printf("Attempting to open default browser (xdg-open)\n");
			system("xdg-open https://www.kieranc.xyz");
			exit(EXIT_SUCCESS);
		}
		if (strcmp(argv[1],"-m") == 0) {
			printf("Attempting to open default Email client (xdg-email)\n");
			system("xdg-email mailto:kierancrossland1st@gmail.com");
			exit(EXIT_SUCCESS);
		}
		if (strcmp(argv[1],"-h") == 0) {
			help_arg();
			exit(EXIT_SUCCESS);
		}
		else {
			printf("Error! Invalid argument \"%s\" ",argv[1]);
			help_arg();
			exit(EXIT_FAILURE);
		}
}
	calculator();
}
int help_arg() 
{
	printf("Avaliable arguments:\n");
	printf("  -v\tPrints the version information\n");
	printf("  -r\tOpens the program's Git repository\n");
	printf("  -w\tOpens the programmer's website\n");
	printf("  -m\tEmails the programmer (kierancrossland1st@gmail.com)\n");
}

int calculator()  
{
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
		calculator();
	}
	else if (strcmp(operator, "-") == 0) {	
		int difference = number1 - number2;
		printf(" = %d\n",difference);
	 	calculator();
	}
	else if (strcmp(operator, "*") == 0) {	
		int product = number1 * number2;
		printf(" = %d\n",product);
	 	calculator();
	}
	else if (strcmp(operator, "/") == 0) {	
		int quotient = number1 / number2;
		printf(" = %d\n",quotient);
	 	calculator();
	}
}
