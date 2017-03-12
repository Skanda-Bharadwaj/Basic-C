#include<stdio.h>

int main(){
	int n;
	printf("no. : ");
	scanf("%d", &n);
	square(n);
}

int square(int a){
	int s=a*a;
	printf("%d\n", s);
	return 0;
}