#include <stdio.h>
int main(){
/* 
* amder input dhorar jonno fist e kono dhoroner data dhorbo ta define kore nite hobe 
* example: int num1; float num_2; char name;
*data type and format specifier somporke jante hobe 
	data Type name                   === byte  ==== format specifier
	int 						                === 4       ==== %d
	long long int 						   === 8       ==== %lld
	float 						                === 4       ==== %f
	double 						                === 8       ==== %lf
	char 						               ===        ==== %c
*/

int roll;
float height;
char name;

//printf("Enter Your Roll then height and Name");
scanf("%d %f %c", &roll, &height, &name);
printf("My roll is %d. Height %0.2f. Name %c", roll, height, name);

	return 0;
}