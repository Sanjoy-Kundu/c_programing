/*
K. Max and Min
Given 3 numbers A, B and C, Print the minimum and the maximum numbers
Input

Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output

Print the minimum number followed by a single space then print the maximum number.
*/

#include <stdio.h>
int main(){
	int A,B,C;
	scanf("%d%d%d", &A, &B,&C);

	if(A <= B && A <= B){
		printf("%d ", A);
	}else if(B <= A && B <= C){
		printf("%d ", B);
	}else{
		printf("%d ", C);
	}

	if(A >= B && A >= B){
		printf("%d ", A);
	}else if(B >= A && B >= C){
		printf("%d ", B);
	}else{
		printf("%d ", C);
	}


	return 0;
}