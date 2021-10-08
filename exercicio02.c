#include<stdio.h>

void atribuirValorZero(int *a, int *b){
	*a=*b=0;
}

int main(){
	int a = 10, b = 20;
 	printf("\nAntes a = %d, b = %d ", a, b);
 	atribuirValorZero(&a, &b);
 	printf("\nAntes a = %d, b = %d ", a, b);
 	return 0;
}
