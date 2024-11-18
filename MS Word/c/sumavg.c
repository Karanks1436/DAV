#include<stdio.h>
int main()
{
    int n,arr[10],sum=0,i;
    float avg;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
printf("Sum = %d ",sum);
printf("Average = %.2f ",avg);
}