#include<stdio.h>

int main(){
	int a[10]={9,8,7,6,5,4,3,2,1,0},s=0;
	for (int i=0; i<10; i++){
	printf("a[%d]=%d\n", i, a[i]);
	s=s+a[i];
	}
	double avg=s/10.0;
	printf("Sum = %d & Avg = %f", s, avg);
}