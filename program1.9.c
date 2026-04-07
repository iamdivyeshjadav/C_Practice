#include<stdio.h>
int main()
{
	int i=0,n,d;
	printf("enter n:\n");
	scanf("%d",&n);
	d=n;
	while(i<=2*n);
	{
	printf("%d\n",d);
    d--;
	i++;
	}
}
/*
output
enter n:
10

10
9
8
7
6
5
4
3
2
1
0
-1
-2
-3
-4
-5
-6
-7
-8
-9
-10

*/