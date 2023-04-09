/* 
Question: Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
vice versa == gunitok
6x1 = 6, 6x2 = 12, 6x3 = 18
6 er gunitok 6 12 18

input Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)
output = 9 3  = Multiple , 5 12 No Multiple
*/


#include <stdio.h>
	int main(){
		int A;
		int B;
		scanf("%d%d", &A, &B);
		if(A%B== 0 || B%A == 0){
			printf("Multiples\n");
		}else{
			printf("No Multiples");
		}

		return 0;
	}