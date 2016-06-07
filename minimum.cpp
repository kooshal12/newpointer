#include<stdio.h>
int maximum(int a[5]);
int main()
{	int a[5],i,n;
	printf("enter all 5 number: ");
	for(i=0;i<5;i++)
	{	scanf("%d",&a[i]);
	}
	maximum(a);
}
int maximum(int a[5])
{	int i,*max;
	*max=a[0];
	for(i=1;i<5;i++)
	{	if(*max<a[i])
		{
		*max=a[i];
		}
	}
	printf("the maximum number is %d ",*max);
}
