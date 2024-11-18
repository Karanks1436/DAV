#include<stdio.h>
int main()
{
int row,col,r,c,first[10][10],second[10][10],sum[10][10];
printf("Enter the number of rows and columns\n");
scanf("%d%d",&row,&col);
printf("Enter the values of 1st matrix: \n");
for(r=0;r<row;r++)
{
    for(c=0;c<col;c++)
    {
        scanf("%d",&first[r][c]);
    }
}

printf("Enter the values of 2nd matrix: \n");
for(r=0;r<row;r++)
{
    for(c=0;c<col;c++)
    {
        scanf("%d",&second[r][c]);
    }
}

printf("Sum of two matrices are : \n");
for(r=0;r<row;r++)
{
    for(c=0;c<col;c++)
    {
        sum[r][c]= first[r][c] + second[r][c];
        printf("%d \t",sum[r][c]);
    }
    printf("\n");
}
}