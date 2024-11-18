#include<stdio.h>
int main()
{
    int l,b,ar,pr;
    printf("Enter the length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&b);
    ar=l*b;
    pr=2*(l+b);
    printf("AREA = %d",ar);
    printf("\n PERIMETER = %d",pr);
}