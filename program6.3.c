#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x,y;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	printf("\n before swapping:\n");
	printf("x: %d\n",x);
	printf("y: %d\n",y);
	
	swap(&x,&y);
	
	printf("\n After swapping:\n");
	printf("x: %d\n",x);
	printf("y: %d\n",y);
}
/*
output
Enter the value of x:2
Enter the value of y:3

 before swapping:
x: 2
y: 3

 After swapping:
x: 3
y: 2
*/