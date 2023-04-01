#include<stdio.h>
int main(){
	/* 
	i. variable lekhar age apnake defile korte hobe je konta ki variable orthat je variable nibo seita ki integer(int), floating(float), character(char), boolean(bool) aita age bole variable er name likte hobe. 
	ii. a. int number = 100; (integer variable number and value is 100)
		b. float number2 = 10.5; (floating variable number2 and value is 10.5)
		c. char name = "Sanjoy"; (character variable name and value is Sanjoy)

	iii. variable er value output kora jonno amder format spicefier somporke jante hobe 
		name   === dataType === format specifier 
		a. integer === int(4 byte) === %d
		b. floating === float(4 byte) === %f
		c. character === char === %c
			int number_one = 100; //integer value
	float number_two = 10.5; //floating value
	*/

	int num_1 = 105;
	float num2 = 20.5;
	char habib = "p";
	printf("%d\n", num_1);
	printf("%0.1f\n", num2);
	printf("%c\n",habib);



	return 0;
}