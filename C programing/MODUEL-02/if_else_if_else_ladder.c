#include<stdio.h>
int main(){
	
	int my_money;
	scanf("%d", &my_money);
		if(my_money > 100){
			printf("Biriyani diye breakfast korbo\n");
		}else if(my_money >50){
			printf("Ruti dal vaji diye breakfast korbo");
		}else if(my_money > 20){
			printf("Cha Buiscit diye nasta korbo");
		}else{
			printf("Taka nai ajke brakfast korum na");
		}
	return 0;
}