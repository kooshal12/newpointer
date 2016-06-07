//4.	Write a function that uses pointers to search for the address of a given integer in a given array. 
#include<stdio.h>
int search(int *pt,int n)
{	int i,flag=0;
	for(i=0;i<5;i++)
	{	if(*(pt+i)==n)
		{	printf(" %d is FOUND AT %u address \n",n,pt+i);
			flag=1;		
			continue;
		}
	}
	if(flag==0)
	printf("NOT FOUND \n");
}
int main(void)
{	int arr[10],n,i;
	printf("ENTER 5 numbers\n");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("ENTER a number to search: \n");
	scanf("%d",&n);
	search(arr,n);
}
