#include<stdio.h>
int main()
{
	int i,n;
	printf("\tEnter no of elements:\n\t");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("\ta[%d]: ",i);
		scanf("%d",&a[i]);}
	printf("Length of an array is: %d",n);
}