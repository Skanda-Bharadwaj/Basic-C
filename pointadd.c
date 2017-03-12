#include<stdio.h>

int main(){
	int *a=0, *b=0, s=0;
	printf("No. : ");
	scanf("%d%d", &*a, &*b); 
	s=(*a)+(*b);
	printf("sum = %d", s);
}