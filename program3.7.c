#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i;
	printf("enter element A :\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("enter element B :\n");
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	printf("A     B     sum\n");
	printf("\n----------------");
	for(i=0;i<5;i++){
		printf("\n%d     %d     %d",a[i],b[i],a[i]+b[i]);
	}
	
}
/*
output
enter element A :
12
13
14
15
16
enter element B :
8
7
6
5
4
A     B     sum

----------------
12     8     20
13     7     20
14     6     20
15     5     20
16     4     20
--------------------------------
Process exited after 24.07 seconds with return value 0
*/
