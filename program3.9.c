#include<stdio.h>
int main()
{
	int a[10],sum=0,i;
	printf("enter 10 number :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		sum=sum+a[i];	
	}
	printf("the sum of even number is: %d",sum);
}
/*
output
enter 10 number :
1
2
3
4
5
6
7
8
9
10
the sum of even number: 30
--------------------------------
*/