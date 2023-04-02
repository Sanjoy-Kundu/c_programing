#include<stdio.h>
int main(){
		
	/*
		Relational Operator 
			1. < (less than)                        <= (lessthan equal)
			2. >(greater than)                    >= (greater than  equal)
			3. == (equal to)
			4. != (not equal)
	*/
	//relational operator using scanf() function
	int taka;
	scanf("%d", &taka);
	if(taka == 100){
		printf("Ami burger khabo");
	}else{
		printf("burger khowar taka nai");
	}



	return 0;
}