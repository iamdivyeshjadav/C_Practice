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