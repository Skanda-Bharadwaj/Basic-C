#include<stdio.h>

int main(){
	float p=500,t,r,si;
	printf("r,t: \n");
	scanf("%f%f", &r, &t);
    si=p*t*r/100;
    printf("si= %f", si);
}