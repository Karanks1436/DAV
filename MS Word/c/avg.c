#include<stdio.h>
int main()
{
    int a,b,c,d;
    float total,avg;
    printf("ENter 4 values=");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    total=a+b+c+d;
    avg=total/4;
    printf("Average = %.2f",avg);
}