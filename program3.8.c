#include<stdio.h>
int main()
{
	int maths[5],sci[5],eng[5],i,total[5];
	float percentage[5];
	for(i=0;i<5;i++){
		printf("enter maths,sci and eng marks of student %d:\n",i+1);
		scanf("%d%d%d",&maths[i],&sci[i],&eng[i]);
		if(maths[i]>100 || sci[i]>100 || eng[i]>100){
			printf("\n invalid marks ");
		}
		total[i]=maths[i]+sci[i]+eng[i];
		percentage[i]=total[i]/3.0;
	}
	for(i=1;i<5;i++){
		if(i==0){
			printf("\nmaths\t|sci\t|eng\t|total\t|per\t|grade");
		}
		if(85.0<=percentage[i])
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|A",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else if(percentage[i]>=70.0)
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|B",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else if(percentage[i]>=50.0)
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|C",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else if(percentage[i]>=33.0)
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|D",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|F",maths[i],sci[i],eng[i],total[i],percentage[i]);
	}
	
}
/*
output
enter maths,sci and eng marks of student 1:
78
69
95
enter maths,sci and eng marks of student 2:
67
57
48
enter maths,sci and eng marks of student 3:
99
89
87
enter maths,sci and eng marks of student 4:
86
85
75
enter maths,sci and eng marks of student 5:
86
96
98

matha || sci ||  eng ||  total || pre || grade || 
67      |57     |48     |172    |57.33  |C
99      |89     |87     |275    |91.67  |A
86      |85     |75     |246    |82.00  |B
86      |96     |98     |280    |93.33  |A
*/