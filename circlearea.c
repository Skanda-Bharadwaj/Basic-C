#include<stdio.h>

int main(){
	int r;
	const float pi=3.14;
	printf("Enter radius: \n");
	scanf("%d", &r);
	double a;
	a=pi*r*r; 
	printf("area = %f\n", a);
	printf("circumference = %f", (2*pi*r));
}