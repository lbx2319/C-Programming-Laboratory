#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b, r;
	char op;

	printf("Please enter: ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{
	case '+':
		r = a + b;
		printf("Result is %d\n", r);
		break;
	case '-':
		r = a - b;
		printf("Result is %d\n", r);
		break;
	case '*':
		r = a * b;
		printf("Result is %d\n", r);
		break;
	case '/':
		r = a / b;
		printf("Result is %d\n", r);
		break;
	case '%':
		r = a % b;
		printf("Result is %d\n", r);
		break;
	case '^':
		r = pow(a, b);
		printf("Result is %d\n", r);
		break;
	default:
		printf("Please give a accurate operator\n");		
	}	
	system("pause");
}