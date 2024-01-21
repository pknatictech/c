// #include<stdio.h>
// struct employee
// {
//     int employee_code;
//     char employee_name[20];
//     int date_of_joining;
// };
// void detailofemployee(struct employee *e)
// {
//     printf("Enter the employee code: ");
//     scanf("%d",&e->employee_code);
//     printf("Enter the name of the employee : ");
//     scanf("%s",e->employee_name);
//     printf("Enter the date of joining: ");
//     scanf("%d",&e->date_of_joining);
// }
// int main()
// {

//     return 0;
// }


#include <stdio.h>
#include <string.h>
// Define the structure for an employee
struct Employee {
    int code;
    char name[50];
    char dateOfJoining[15];
};

int main() {
    int numEmployees;
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    // Get the number of employees from the user
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    
    // Create an array of Employee structures
    struct Employee employees[numEmployees];
    
    // Input employee details
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].code);
        printf("Employee Name: ");
        scanf(" %[^\n]s", employees[i].name);  // Read with spaces
        printf("Date of Joining (dd/mm/yyyy): ");
        scanf("%s", employees[i].dateOfJoining);
    }
    
    // Get the current date from the user
    char currentDate[15];
    printf("\nEnter current date (dd/mm/yyyy): ");
    scanf("%s", currentDate);
    
    // Calculate and display the employees with tenure >= 3 years
    printf("\nEmployees with tenure >= 3 years:\n");
    for (int i = 0; i < numEmployees; i++) {
        // Assuming date format is always dd/mm/yyyy
        int currentDay, currentMonth, currentYear, joinDay, joinMonth, joinYear;
        sscanf(currentDate, "%d/%d/%d", &currentDay, &currentMonth, &currentYear);
        sscanf(employees[i].dateOfJoining, "%d/%d/%d", &joinDay, &joinMonth, &joinYear);
    for(int i = 0; i < numEmployees; i++)
    {
        int emp_mo_day = 0 ;
        for(int j = employees[i].joinMonth-1;j<= currentMonth-1;j++ )
        {
            emp_mo_day = emp_mo_day + month_days[j]
        }



    }




        if (years >= 3) {
            printf("%s\n", employees[i].name);
        }
    }
    
    return 0;
}