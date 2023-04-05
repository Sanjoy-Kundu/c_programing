#include<stdio.h>
int main(){
	int e;
	int g = 1;
	//for loop

	for(e = 1; e <= 10; e++ ){
		printf("%d\n", e);
	}




	//while loop

	e = 1;
	while(e <= 5){
		printf("%d\n", e);
		e++;
	}


//do while loop
do{
	printf("%d\n", g);
	g++;
}while(g < 10);
	return 0;
}