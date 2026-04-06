#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c;
	c=a*a*a+3*a*a*b+3*a*b*b+b*b*b;
	printf("ans:%d",c);
}
/*
OUTPUT
  A=5
  B=10
  ans:3375
--------------------------------
*/
