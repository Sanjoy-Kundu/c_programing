#include<stdio.h>
int main(){
	/*
QUESTION:2
============
You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.
Inputs are 5 and 2
	*/

	int num1, num2;
	int sum;
	int sub;
	int multi;
	float divi;
	scanf("%d %d",&num1, &num2);
	sum = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	divi = num1*1.0 / num2;

	printf("Addition result is %d\nSubtructions result is %d\nMultiplication result is %d\nDivision result is %0.2f\n", sum, sub, multi, divi);



return 0;
}