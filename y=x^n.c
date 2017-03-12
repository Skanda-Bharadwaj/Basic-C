#include<stdio.h>

int main(){
	float y=1.0,x,n; int c=1;
	printf("x and n : ");
	scanf("%f%f", &x, &n);

	while(c<=n){
		y=y*x;
		c++;
	}
	printf("x^n = %f", y);
}