#include<stdio.h>

int main()
{
int a[50],b[50],n1,n2,i,x;

printf("enter the number of elements in the first array : ");
scanf("%d",&n1);

printf("\nenter the elements\n");
for(i=0;i<n1;i++)
{
printf("enter a[%d] ",i+1);
scanf("%d",&a[i]);
}

printf("\nenter the number of elements in the second array\n");
scanf("%d",&n2);

printf("enter the elements\n");
for(i=0;i<n2;i++)
{
printf("enter b[%d] ",i+1);
scanf("%d",&b[i]);
}

for(x=0;x<n1;x++)
{
	for(i=0;i<n2;i++)
		{
			if(b[i]==a[x])
				{
					b[i]='	';
				}
		}
}
for(i=0;i<n1;i++)
	{
			printf("%d",a[i]);
	}
for(i=0;i<n2;i++)
	{
		if(b[i]=='	')
			continue;
		else
	printf("%d",b[i]);
	}
}
