#include<stdio.h>
int main()
{
    int i,a=0,b=1,s,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
}