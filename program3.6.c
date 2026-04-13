#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number:= ");
	scanf("%d",&n);
	for(i=1;i<11;i++){
		printf("\n%d X %d =%d",n,i,n*i);
	}
	printf("\n");	
}
/*
output
enter number: 7
7 X 1 =7
7 X 2 =14
7 X 3 =21
7 X 4 =28
7 X 5 =35
7 X 6 =42
7 X 7 =49
7 X 8 =56
7 X 9 =63
7 X 10 =70
--------------------------------
*/