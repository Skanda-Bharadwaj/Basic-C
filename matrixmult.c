#include<stdio.h>

int main(){
	int ma,mb,na,nb,i,j,l,k,p,q,c[10][10]={0},a[10][10],b[10][10];
    
	printf("Rows of A : ");
	scanf("%d", &ma);
	printf("Columns of A: ");
	scanf("%d", &na);

	printf("Rows of B : ");
	scanf("%d", &mb);
	printf("Columns of B: ");
	scanf("%d", &nb);

	if(na!=mb){
		printf("wrong input");
	}

	else{

		printf("\nEnter the values of A: \n");

		for(i=0; i<ma; i++){
			for(j=0; j<na; j++)
				scanf("%d", &a[i][j]);
		}

		printf("\nEnter the values of B: \n");	

		for(i=0; i<mb; i++){
			for(j=0; j<nb; j++)
				scanf("%d", &b[i][j]);
		}

		printf("\nA is : \n");

		for(i=0; i<ma; i++){
			for(j=0; j<na; j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}

		printf("\nB is : \n");

		for(i=0; i<mb; i++){
			for(j=0; j<nb; j++)
				printf("%d ", b[i][j]);
			printf("\n");
		}

		printf("\nA*B is : \n");

		for(i=0; i<ma; i++){
			for(l=0; l<nb; l++){
				for(j=0,k=0; j<na,k<mb; j++,k++){
				 	c[i][l]=c[i][l]+a[i][j]*b[k][l];
				}
			}
		}

		for(i=0; i<ma; i++){
			for(l=0; l<nb; l++)
				printf("%d ", c[i][l]);
			printf("\n");
		}

	
    }
	
}