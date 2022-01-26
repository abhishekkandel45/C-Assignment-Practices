//To write a C program to print the employee details of employees using structure.
#include<stdio.h>
#include<string.h>
//Declaaration of structure org 
struct org
{
    char name [30];
    int emp_id, salary;
};
int main()
{
    //declaring org member as array
    struct org employee [100];
    int n,i;
    printf ("\nEnter the number of emplayee in your organization(<=100): ");
    scanf("%d", &n);
    
    //Taking the value using the loop
    for (i=1;i<=n;i++)
    {
        printf("\nEnter person %d Name:  ",i);
        printf("\nEnter the name: ");
        fflush (stdin);
        gets(employee[i].name);
        printf("\nEmployee Id :");
        scanf("%d",&employee[i].emp_id);
        printf("\nEmployee Salary :");
        scanf("%d",&employee[i].salary);
    }
    //printing employee information
    printf("\nEmployees Information\n");
    for(i=0;i<n;i++)    
    {
        printf("\nPerson %d\n Name : %s",i+1,employee[i].name);
        printf("\nEmployee Id : %d",employee[i].emp_id);
        printf("\nEmployee Salary : %d",employee[i].salary);
    }
    return 0;
}
