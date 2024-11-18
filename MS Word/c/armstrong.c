#include<stdio.h>
int main()
{
    int r,sum,ul,ll,n,t;
    printf("ENter start and end = ");
    scanf("%d %d",&ll,&ul);
    printf("Armstrong numbers are : \n");
    for(n=ll;n<=ul;n++)
    {
        t=n;
        sum=0;
        while(t!=0)
        {
            r=t%10;
            t=t/10;
            sum=sum+(r*r*r);
        }
        if(sum==n)
        {
            printf("%d ",n);
        }
        printf("\n");
    }
}