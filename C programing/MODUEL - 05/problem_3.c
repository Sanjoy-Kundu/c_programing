/*
Questions: Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input : Only one line containing a character X which will be a capital or small letter.

output = a => A , A => a
*/

#include<stdio.h>
int main(){

	char x;
	scanf("%c", &x); 
	if(x >= 'a' && x <= 'z'){
		int result = x-32; // 97 -32 = 65
		//printf("%d", result);
		printf("%c", result);
	}else{
		int result = x+32;
		printf("%c", result);
	}

	return 0;
}