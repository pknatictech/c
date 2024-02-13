#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date
{
    int d, m, y;
};
struct employee
{
    int empcode[20];
    char empname[30];
    struct date join_date;
    float salary;
};
int main()
{
    FILE *p, *q;
    int choice;
    struct employee e;
    while (1)
    {
        printf("\n1. Print all Employee data.\n");
        printf("2. Print Specific Employee data.\n");
        printf("3. Add new Employee.\n");
        printf("4. Delete Employee.n");
        printf("5. Arrange Employee by name\n");
        printf("6. Arrange Employee by date\n");
        printf("7. Exit.\n");
        printf("==> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            p = fopen("EMPLOYEE.DAT", "r");
            while (fread(&e, sizeof(e), 1, p) != NULL)
            {
                printf("Employee Code = %d\n", e.empcode);
                printf("Employee Name = %s\n", e.empname);
                printf("Employee Joining date = %d/%d/%d\n", e.join_date.d, e.join_date.m, e.join_date.y);
                printf("Employee Salary = %f\n", e.salary);
            }
            fclose(p);
        }
        break;
        case 2:
        {
        }
        break;
        case 3:
        {
            p = fopen("EMPLOYEE.DAT", "a");
            printf("Enter Employee Code - ");
            scanf("%d", &e.empcode);
            getchar();
            printf("Enter Employee Name   - ");
            gets(e.empname);
            printf("Enter Employee Joining date (DD/MM/YYYY) - ");
            scanf("%d/%d/%d", &e.join_date.d, &e.join_date.m, &e.join_date.y);
            printf("Enter Employee Salary   - ");
            scanf("%f",&e.salary);
            fwrite(&e,sizeof(e),1,p);
            fclose(p);
        }
        break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}