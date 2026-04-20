#include <stdio.h>
int main()
 {
    int size, i, j, sum = 0;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);
    int a[size][size];
    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < size; i++) {
        sum += a[i][size - i - 1];
    }
    printf("\nThe sum of anti-diagonal elements of an Array: %d\n", sum);
}
/*
output
Enter the array's row & column size: 3
Enter array's elements:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
a[2][0] = 7
a[2][1] = 8
a[2][2] = 9

The sum of anti-diagonal elements of an Array: 15
*/

