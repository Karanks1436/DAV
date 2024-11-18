#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollno;
};
int sortstudent(struct student stud[],int n)
{
    struct student temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(stud[i].name,stud[j].name)>0)
            {
                temp=stud[i];
                stud[i]=stud[j];
                stud[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of students:");
scanf("%d",&n);
struct student stud[n];
for(int i=0;i<n;i++)
{
    printf("Enter the name and rollno of %d student: ",i+1);
    scanf("%s %d",&stud[i].name,&stud[i].rollno);
}
sortstudent(stud,n);

printf("Sorted students:\n");

for(int i=0;i<n;i++)
{
printf("NAME: %s \t ROLL NO.: %d\n",stud[i].name,stud[i].rollno);
}
}