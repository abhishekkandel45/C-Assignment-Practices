#include<stdio.h>
#define MAX_ROLES 50
typedef struct
{
    char roll[10];
    char name[30];
    float marks[6];
} student;
int main()
{
    student stud[MAX_ROLES];
    int i,k,f=0;
    k=0;
    f=0;
    for(i=0;i<MAX_ROLES;i++)
    {
        printf("Enter roll,name,marks\n");
        scanf("%s%s%f",&stud[i].roll,&stud[i].name,&stud[i].marks);
        if(stud[i].marks>80)
        {
            printf("roll: %s, marks:%f, name: %s\n",stud[i].roll,stud[i].marks,stud[i].name);
            k++;
        }
    }
    if(k>0)
    {
        printf("students who secured more 80% in  exam are:%d\n",k);
    }
    return 0;
}