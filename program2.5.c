#include<stdio.h>
int main()
{
	int i,n,d,h;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		d=i;
		if(i>1){
			for(h=1;h<i;h++)
			{
				d=d*2;
			}
		}
	}

}
/*
output 
*/