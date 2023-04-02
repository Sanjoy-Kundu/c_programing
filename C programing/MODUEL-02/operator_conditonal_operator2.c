#include<stdio.h>
int main(){
	printf("Hello division\n");
	/* 
		float kore 99/5 diye vag dei tahole 19.00000 asbe 
		akuret result anar jonno amra jekono aka variable er sathe 1.0 gun korte hobe taholei hobe 
	*/
	int a = 99;
	int b = 5;
	float division = a*1.0 / b; //output = 19.8

	printf("Division result is %0.1f", division);
	return  0;
}