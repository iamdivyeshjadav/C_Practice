#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter order of matrix:\n");
	scanf("%d",&n);
	int iden[n][n];
	printf("The Indentity Matrix is:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			printf("1 ");
			else 
			printf("0 ");
		}
		printf("\n");
	}
}
/*
output
Enter order of matrix:
12
The Indentity Matrix is:

1 0 0 0 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0 0 0
0 0 0 0 0 1 0 0 0 0 0 0
0 0 0 0 0 0 1 0 0 0 0 0
0 0 0 0 0 0 0 1 0 0 0 0
0 0 0 0 0 0 0 0 1 0 0 0
0 0 0 0 0 0 0 0 0 1 0 0
0 0 0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 0 0 0 1
*/