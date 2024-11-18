#include<stdio.h>
int main()
{
    int Fact(int x);
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("factorial of %d is %d",x,Fact(x));
}
int Fact(int x)
{
    if(x>=1)
    return(x*Fact(x-1));
else 
return 1;
}