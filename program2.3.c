#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	 	if(i%2==0){
	 		printf("%d ",i*i);
		}else{
			printf("%d ",i);
		}			
	}
}
/*
output
*/