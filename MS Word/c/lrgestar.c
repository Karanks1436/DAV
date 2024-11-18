#include<stdio.h>
int main()
{
    int n,arr[10],i,max;
    printf("Enter the number of elements = ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("%d is largest",max);
}