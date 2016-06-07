//Write a program to read a matrix of size m*n entered by the user and display its transpose matrix. Use Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{	int m,n,i,j,*ptr;
	printf ("Enter a row and column of matrices ");
	scanf ("%d%d",&m,&n);
	ptr=(int *)malloc(m*sizeof(int));
	printf("enter matrix coefficients \n");
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf ("%d",(ptr+i)+j);
	printf("the entered matrix is \n");
	for (i=0;i<m;i++)
	{	for (j=0;j<n;j++)
		{	printf ("%d ",*(ptr+i)+j);
		}
		printf("\n");
	}
	printf ("\n the transpose of a matrix is  form is\n");
	for (j=0;j<n;j++)
	{	for(i=0;i<m;i++)
		{		printf ("%d ",(*(ptr+i)+j));
		}
		printf ("\n");
	}
	free(ptr);
}
