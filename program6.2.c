#include <stdio.h>
int findSum(int arr[],int size)
{
    int sum = 0;
    for (int i=0;i<size;i++) 
	{
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int totalSum = findSum(a, n);
    printf("\nThe sum of an Array: %d\n", totalSum);

}
/*
output
Enter array size: 5
Enter array elements:
a[0] = 2
a[1] = 3
a[2] = 4
a[3] = 5
a[4] = 6

The sum of an Array: 20
*/