#include <stdio.h>
#include <stdlib.h>
struct Employee
{
char Name[20];
char Employee_ID[20];
int Experience;
float Salary;
};
int main()
{
    int i=0;
    struct Employee e[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter the name of Employee%d:",i+1);
        fflush(stdin);
        gets(e[i].Name);
        printf("\nEnter the Employee ID%d:",i+1);
        fflush(stdin);
        gets(e[i].Employee_ID);
        fflush(stdin);
        printf("\nEnter the Experience of the Employee%d:",i+1);
        fflush(stdin);
        scanf("%d",&e[i].Experience);
        printf("\nEnter the Salary of the Employee:",i+1);
        fflush(stdin);
        scanf("%f",&e[i].Salary);
    }
    for(i=0;i<5;i++)
    {
        printf("\nName of the Employee%d:%s",i+1,e[i].Name);
        printf("\nEmployee ID%d:%s",i+1,e[i].Employee_ID);
        printf("\nExperience%d:%d",i+1,e[i].Experience);
        printf("\nSalary%d:%f\n",i+1,e[i].Salary);
    }

    return 0;
}
