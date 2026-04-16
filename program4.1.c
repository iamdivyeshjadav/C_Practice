#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],tot[3][3];
	int i,j,k;
	for(k=1;k<=2;k++){	
		if(k==1)
		printf("\n Enter elements for Array 1\n ");
		else
		printf("\n Enter elements for Array 2\n ");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("Enter element for index no. [%d][%d]: ",i,j);
		if(k==1)
		scanf("%d",&arr1[i][j]);
		else
		scanf("%d",&arr2[i][j]);
		tot[i][j]=arr1[i][j]+arr2[i][j];}
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++){
	if(i==0||i==2)			
	printf("%d %d %d\t   %d %d %d\t   %d %d %d\n",arr1[i][0],arr1[i][1],arr1[i][2],arr2[i][0],arr2[i][1],arr2[i][2],tot[i][0],tot[i][1],tot[i][2]);	
	else
	printf("%d %d %d\t+  %d %d %d\t=  %d %d %d\n",arr1[i][0],arr1[i][1],arr1[i][2],arr2[i][0],arr2[i][1],arr2[i][2],tot[i][0],tot[i][1],tot[i][2]);	
		}
}
/*
output
 Enter elements for Array 1
 Enter element for index no. [0][0]: 49
Enter element for index no. [0][1]: 48
Enter element for index no. [0][2]: 47
Enter element for index no. [1][0]: 46
Enter element for index no. [1][1]: 45
Enter element for index no. [1][2]: 44
Enter element for index no. [2][0]: 43
Enter element for index no. [2][1]: 42
Enter element for index no. [2][2]: 41

 Enter elements for Array 2
 Enter element for index no. [0][0]: 1
Enter element for index no. [0][1]: 2
Enter element for index no. [0][2]: 3
Enter element for index no. [1][0]: 4
Enter element for index no. [1][1]: 5
Enter element for index no. [1][2]: 6
Enter element for index no. [2][0]: 7
Enter element for index no. [2][1]: 8
Enter element for index no. [2][2]: 9




49 48 47           1 2 3           50 50 50
46 45 44        +  4 5 6        =  50 50 50
43 42 41           7 8 9           50 50 50

--------------------------------
*/