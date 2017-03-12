#include<stdio.h>

int main(){
	int a[10],i, *p, max;
	printf("5 nos. : \n");
	for(i=0; i<5; i++)
	scanf("%d", &a[i]);
	max=a[0];
	*p=max;
	for(i=0; i<5; i++){
		if(a[i]>(*p))
			*p=a[i];
	}
	printf("Greatest : %d\n", *p);
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", &p);
	printf("%d\n", &*p);
}
