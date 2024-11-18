#include<stdio.h>
#include<limits.h>

int main()
{
    int n, mx, mx2;
    printf("Enter the Number of terms= ");
    scanf("%d",&n);
    int arr[n];  // Declare array after getting the value of n
    printf("Enter the Elements= ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mx=arr[0];
    mx2=INT_MIN;
    for(int i=1;i<n;i++)
    {
       if(mx<arr[i])
       {
        mx2=mx;
        mx=arr[i];
       }
       else if(mx!=arr[i] && mx2<arr[i])
       {
            mx2=arr[i];
       }
    }
    printf("Largest Element is %d \n",mx);
    if(mx2==INT_MIN)
        printf("Second largest element does not exist\n");
    else
        printf("Second Largest Element is= %d \n",mx2);
}