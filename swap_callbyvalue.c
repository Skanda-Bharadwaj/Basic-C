#include<stdio.h>

int main(){
	int a,b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	swap(a,b);
}

int swap(int x, int y){
	int t;
	t=x;
	x=y;
	y=t;
	printf("a = %d\nb = %d\n", x, y);
}