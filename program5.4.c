#include<stdio.h>
void cube(){
	int i,j;
	printf("Enter the cube num:");
	scanf("%d",&i);
	j=i*i*i;
	printf("cube =%d",j);
	
}
int main()
{
 cube();
}
/*
output
Enter the cube num:5
cube =125
*/