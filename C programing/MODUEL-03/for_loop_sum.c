#include<stdio.h>
int main(){	
	int i, sum = 0;
	for(i = 1; i <= 10; i++){
		//printf("%d", i);
		//sum = sum +i;
		sum += i;
	//i = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10;
	//	sum = sum + i ;
	//			 = 0     + 1      == 1(jogfol)
	//			= 1      + 2       == 3 (jogfol)
	//          = 3      + 3       == 6 
	//						============
	//										10
	}
	printf("%d", sum);
	return 0;
}