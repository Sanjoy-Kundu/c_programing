#include<stdio.h>
int main(){
	/* 
		Operator and Conditional Operator
		a.Arithmetic Operator (+, -, *, /, %)
	*/
	int num1 = 10, num2 = 30;
	int sum = num1 + num2;
	int sub = num2 - num1;
	int multi = num1 * num2;
	int divi = num2 / num1;
	int modu = num1 %num2;

	printf("Total addition is %d\n Substruction is %d\n Multiplication is %d\n Division is %d\n Modulus is  %d\n", sum, sub, multi, divi, modu );
	return 0;
}