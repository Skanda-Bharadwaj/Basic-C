#include<stdio.h>

int main(){
	int n=11,i,j;
	for (i=1; i<=(n/2+1); i++){
		for (j=(n/2); j>=i; j--){
			printf(" ");
		}
		for (int k=1; k<=(2*i-1); k++){
			printf("*");
		}
		printf("\n");
	}
}