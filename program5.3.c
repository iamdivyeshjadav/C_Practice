#include<stdio.h>
int main() 
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int a[size],b[size],c[size];
    printf("\nEnter array A elements:\n");
    for (int i=0;i<size;i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter array B elements:\n");
    for (int i=0;i<size;i++) {
        printf("b[%d] =",i);
        scanf("%d",&b[i]);
    }
    for (int i=0;i<size;i++) {
        c[i]=a[i]+b[i];
    }
    printf("\nOutput:\nArray C is: ");
    for (int i=0;i<size;i++) {
        printf("%d",c[i]);
        if (i<size-1) 
		{
            printf(", ");
        }
    }
}
/*
output
Enter array size: 5

Enter array A elements:
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5

Enter array B elements:
b[0] =6
b[1] =5
b[2] =4
b[3] =3
b[4] =2

Output:
Array C is: 7, 7, 7, 7, 7
*/