#include<stdio.h>
struct employee
{
    char name[25];
    int  age;
    int  phonenumber;
    int  salary;
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter %d employee details \n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter employee name :\n");
        scanf("%s",emp[i].name);
        printf("Enter employee age :\n");
        scanf("%d",&emp[i].age);
        printf("Enter employee phonenumber :\n");
        scanf("%d",&emp[i].phonenumber);
        printf("Enter employee salary :\n");
        scanf("%d",&emp[i].salary);
    }
    printf("\nNAME\tAGE\tPHONE NUMBER\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phonenumber,emp[i].salary);
    }
}
