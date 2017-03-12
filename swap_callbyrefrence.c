#include<stdio.h>

int main(){
	int *aa, a, b, *bb, swap();
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	aa = &a; // aa = address of a
	bb = &b; // bb = address of b
	swap(&a, &b); //swapping address swap(aa,bb)
}

int swap(int *x, int *y){ //send pointers as parameter
	int *t;
	t = x; // can equate only pointer  t=x, x contains value a 
	x = y; // x is pointing to address of b
	y = t; // y is pointing to addresa of a
	printf("\na = %d\nb = %d\n", *x, *y); //print value pointed by x and y
	return 0;
}