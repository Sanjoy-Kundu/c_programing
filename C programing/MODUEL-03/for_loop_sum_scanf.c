#include<stdio.h>
int main(){
	int i, user_input, sum = 0;
/* 
sutro == (nx(n-1))/2
*/


	scanf("%d", &user_input);
	for(i = 1; i < user_input; i++){
		sum+=i;
	}
	printf("%d", sum);

	return 0;
}

