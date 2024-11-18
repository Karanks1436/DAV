#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter two values = ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: %d %d ",a,b);
    swap(&a,&b);
    printf("After swap : %d %d",a,b);
}