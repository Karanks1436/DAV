#include<stdio.h>
int main()
{
int t,r,n,sum=0;
printf("Enter number= ");
scanf("%d",&n);
for(t=n;n!=0;n=n/10)
{
    r=n%10;
    sum=sum*10+r;
}
if(t==sum)
{
    printf("The number is a palindrome");
}
else{
    printf("The number is not a palindrome");
}
}