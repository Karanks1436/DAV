#include<stdio.h>
#include<string.h>
int main()
{
    char one[200]= "madam";
    char two[200];
    strcpy(two,one);
    strrev(two);
    if(strcmp(one,two)==0)
    {
        printf("Palindrome");

    }
    else 
    printf("not ");
}