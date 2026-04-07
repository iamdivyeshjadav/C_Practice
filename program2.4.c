#include<stdio.h>
int main()
{
	int i=2,j=5,next,n;
	printf("enter n\n");
	scanf("%d",&n);
	next=i+j;
	for(int d=i;d<n;d++){
		printf("%d ",next);
		i=j;
		j=next;
		next=i+j;
	}
}
/* 
output
enter n=10
1 2 3 5 8 13 21 34 55 89
*/