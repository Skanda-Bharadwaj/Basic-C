#include<stdio.h>

int main(){
	printf("\n                        Multiplication Table            \n");
	printf("-------------------------------------------------------------------------\n");

	int i,j;

	for(i=1; i<=10; i++){
		for(j=1; j<=12; j++){
			if (i*j>=100)
				printf("%d   ", i*j);
			else if(i*j<10)
				printf("%d     ", i*j);
			else
				printf("%d    ", i*j);
		}
		printf("|\n");	
	}
	printf("-------------------------------------------------------------------------\n\n");
}