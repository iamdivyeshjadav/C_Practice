#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter Order of the matrix:\n");
	scanf("%d",&n);
	int arr[n][n],diagonal=0,upper=0,lower=0;
	printf("Enter the element for index no.:\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("[%d][%d]: ",i,j);
		scanf("%d",&arr[i][j]);
		if(i==j)
		diagonal=diagonal+arr[i][j];
		else if(j>i)
		upper=upper+arr[i][j];
		else
		lower=lower+arr[i][j];
		}
	}
	printf("\n\nThe Matrix is :\n\n");
	for(i=0;i<n;i++){
	for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	}
	printf("\nThe sum of Diagonal element is: %d",diagonal);
	printf("\nThe sum of Upper Triangle element is: %d",upper);
	printf("\nThe sum of Lower Triangle element is: %d",lower);
}