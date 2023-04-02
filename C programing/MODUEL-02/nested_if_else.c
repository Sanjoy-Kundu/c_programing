#include<stdio.h>
int main(){
	int money;
	scanf("%d", &money);

	if(money >= 5000){
		printf("Bandorbon jabo\n");
			if(money >= 1000){
				printf("Bandarbon Thke Kuakata jabo.\n");
			}else{
				printf("Bandar bon theke bari jaw");
			}
	}else{
		printf("Amar kace gurte jawer taka nai");
	}
	return 0;
}