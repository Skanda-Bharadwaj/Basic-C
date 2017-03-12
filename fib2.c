#include<stdio.h>

int main(){
	int n1,n2,c=0,i;
	printf("Enter the no. : ");
	scanf("%d%d", &n1, &n2);
	int a=0,b=1;
	//printf("0\n");
    for(i=3; i<=n2; i++){
        if(c<n2){
        c=a+b;
        b=a;
        a=c;
        if(c>n1 && c<n2)
        printf("%d\n", c);
        }
    }
}