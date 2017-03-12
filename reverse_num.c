#include<stdio.h>

int main(){
	int n,t=0,r;
	printf("Enter the number = ");
	scanf("%d",&n);
	while(n>0){
    r=n%10;
    n=n/10;
    t=t*10+r; 
	}
	printf("%d", t);
}