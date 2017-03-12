#include<stdio.h>

int main(){
	int a[10]={93,845,745,62,545,42,345,22524,25,322},s=0;
	s=a[0]; int k;
	for (int i=0; i<10; i++){
		if(a[i]>s){
			s=a[i];
			k=i;
		}
	}
	printf("Greater no. : %d ith element : %d", s, k);
}