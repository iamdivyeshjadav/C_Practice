#include<stdio.h>
int main()
{
    int size, i;
    float sum = 0, average;
    printf("Enter array size: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
	 {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        sum+=a[i]; 
    }
    average=sum/size;
    printf("Average of an Array: %.1f\n", average);
}
/*
output
Enter array size: 5
Enter array elements:
a[0]=12
a[1]=13
a[2]=14
a[3]=15
a[4]=16
Average of an Array: 14.0
*/