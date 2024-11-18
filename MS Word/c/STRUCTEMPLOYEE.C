#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float sal;
};
int main()
{
    struct employee emp;
    printf("Enter employee id,name and salary:");
    scanf("%d%s",&emp.id,&emp.name);
    scanf("%f",&emp.sal);

    printf("Details: \n");

    printf("ID: %d\n NAME: %s\n SALARY: %.2f",emp.id,emp.name,emp.sal);
}