#include<stdio.h>
float arr[2];
float *reverse(float *ptr,int h){
	arr[h];
	for (int i=0;i<h;i++){
		arr[i]=ptr[i];	
		}	
	return (arr);
}
int main(){
	int n,i;
	printf ("Enter size of array ");
	scanf ("%d",&n);
	float p[n];
	for (i=0;i<n;i++){
		scanf ("%f",p+i);
	}
	float *newarr=reverse(p,n);
	printf ("\n Reversed array is\n");
	for (i=n-1;i>=0;i--){
		printf ("%.2f\t",*(newarr+i));
	}
}

