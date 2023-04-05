#include<stdio.h>
int main(){
	/* 
	* break statement bujanor jonno first e loop cholbe and jokhonei number er man 5 hobe tokhonei break kore dibe
	
	* ar jokhonei printf e upore thakbe tokhonei value print kore break korbe 
	*/
	int number;

	for(number = 1; number <= 10; number++){
	//printf("%d\n", number);  output 1 2 3 4 5
		if(number == 5){
			break;
		}
		printf("%d\n", number); //output 1 2 3 4 
	}
	


	return 0;
}