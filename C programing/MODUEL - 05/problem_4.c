/* 
Question: P. First digit !
	Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
	For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

	input ==> Only one line containing a number X (999 < X  ≤  9999)

	output ==> If the first digit is even print "EVEN" otherwise print "ODD".

	Tips: 
		4 digit thke first digit newar jonno 1000 diye vag korlei 1 digit asbe and type obossoi int hobe
		3 digit thke first digit newar jonno 100 diye vag korlei 1 digit asbe and type obossoi int hobe


*/
//printf("%d", first_digit);
#include<stdio.h>
int main(){

	int X;

	scanf("%d", &X);
	int first_digit = (X /1000);
		
		if(first_digit%2 == 0){
			printf("EVEN\n");
		}else{
			printf("ODD\n");
		}

	return 0;
}