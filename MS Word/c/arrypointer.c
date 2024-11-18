#include<stdio.h>
int main()
{
    int n=0,number[5];
    printf("How many elements yiu want to enetr? ");
    scanf("%d",&n);
    printf("Enter elements ;");
    for(int i=0;i<n;i++)
    {
        scanf("%d",number+i);
    
    }
    printf("ENtered elements: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(number+i));
    }
}