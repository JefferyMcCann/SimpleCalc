#include <stdio.h> 
#include <math.h> 

// making a calculator 
int main() {

	double value1; 

	double value2; 

	double valueDivP = 100; 

	char symbol; 

	double valuePercentage;

	printf("For your calculations you can only have two differnt numbers, the syntax is Number symbol number. \n");

	printf("The symbols available are \n * or x multiplication \n + addition \n / division \n - subtraction \n ) percentages  \n "); 

	printf("please enter your problem\n"); 

	scanf("%lf", &value1);

	scanf("%s", &symbol);  // for the symbol used in the calculator 

	scanf("%lf", &value2); 
	
	switch (symbol) {
		case '*':
			printf("%lf",value1 * value2); 
			break;
		case '+': 
			printf("%lf", value1 + value2);
			break;
		case '/':
			printf("%lf", value1 / value2);
			break; 
		case '-': 
			printf("%lf", value1 - value2);
			break; 
		case 'x':
 			printf("%lf", value1 * value2);
			break; 
		case '%': 
			printf("%lf", value1 / valueDivP * value2);
			printf("\n");
			valuePercentage = value1 / valueDivP * value2; 
			break; 
		case ')': 
			printf("%lf", value1 / value2 * valueDivP);
			valuePercentage = value1 / value2 * valueDivP;
			break;
	}

}
