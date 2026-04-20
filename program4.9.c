#include <stdio.h>
int main()
 {
    int a[5][5],i,j,sum=0;
    printf("Enter array elements:\n");
    for (i=0;i<5;i++)
	 {
        for (j=0;j<5;j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nOutput:\n");
    for (i=0;i<5;i++)
	 {
        for (j=0;j<5;j++) {
            if (i==0||i==4||j==0||j==4) 
			{
                printf("%d ", a[i][j]);
                sum += a[i][j];
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
    printf("\nThe sum of boundary elements of an Array: %d\n", sum);
}
/*
output
Enter array elements:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[0][3] = 4
a[0][4] = 5
a[1][0] = 6
a[1][1] = 7
a[1][2] = 8
a[1][3] = 9
a[1][4] = 8
a[2][0] = 7
a[2][1] = 6
a[2][2] = 5
a[2][3] = 4
a[2][4] = 3
a[3][0] = 2
a[3][1] = 1
a[3][2] = 9
a[3][3] = 8
a[3][4] = 7
a[4][0] = 6
a[4][1] = 5
a[4][2] = 4
a[4][3] = 3
a[4][4] = 3

Output:
1 2 3 4 5
6       8
7       3
2       7
6 5 4 3 3

*/