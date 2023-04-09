/* 
Welcome for you with Conditions
question: Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No"
input: Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).
output = (10, 8) Yes, (7, 5) No

*/

#include <stdio.h>
int main(){

	int A, B;
	scanf("%d%d", &A, &B);
	if(A >= B){
		printf("Yes\n");
	}else{
		printf("No\n");
	}


	return 0;
}