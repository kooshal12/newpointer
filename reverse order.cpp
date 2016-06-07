//. Write a function that is passed an array of n pointers to floats and returns a newly created array that contains those n float values in reverse order. 
#include<stdio.h>
float m[100];
float *reverse(float *ptr,int h){
	m[h];
	for (int i=0;i<h;i++){
		m[i]=ptr[i];
	}
	return m;
}
int main(){
	int n,i;
	printf ("Enter size of array ");
	scanf ("%d",&n);
	float p[n];
	printf ("\nElement for array\n");
	for (i=0;i<n;i++){
		scanf ("%f",p+i);
	}
	printf (" new array are of different addresses are\n");
	float *newarray=reverse(p,n);
	for (i=0;i<n;i++){
		printf ("%x %.2f\n",newarray+i,*(newarray+i));
	}
}
