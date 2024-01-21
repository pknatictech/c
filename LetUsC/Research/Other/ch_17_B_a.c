#include <stdio.h>
#include <string.h>
struct student
{

    char name[50];
    char subject[20];
    int roll_no;
    int year;
};
void search(struct student z[5], int x)
{
    int c = 1;
    for (int i = 0; i <= 4; i++)
    {
        if (x == z[i].year)
        {
            printf("Student: %d\n", c);
            printf("Name : %s\n", z[i].name);
            printf("Subject : %s\n", z[i].subject);
            printf("Roll_no.: %d\n", z[i].roll_no);
            printf("Year : %d\n\n", z[i].year);

            c++;
        }
    }
}
void searchRollno(struct student z[5], int a)
{
    int i, c;
    for (i = 0; i <= 4; i++)
    {
        if (a == z[i].roll_no)
        {
            printf("Name : %s\n",z[i].name);
            printf("Subject : %s\n", z[i].subject);
            printf("Roll_no.: %d\n", z[i].roll_no);
            printf("Year : %d\n\n", z[i].year);
        }
    }
}

int main()
{
    struct student s[5] =
        {
            {"Shrija Varshney", "BCA", 1, 2021},
            {"Daya Basti", "B.sc", 2, 2022},
            {"Anshu Sharma", "B.com", 3, 2021},
            {"Aadhya Mishra", "BBA", 4, 2022},
            {"Devika Varshney", "B.tec", 5, 2023},
        };
    int year, roll_no;
    printf("Enter the year : ");
    scanf("%d", &year);
    search(s, year);
    printf("Enter the Roll_no.:");
    scanf("%d", &roll_no);
    searchRollno(s, roll_no);
        // for(int i=0;i<=4;i++)
        // {
        //     printf("Student: %d\n",i+1);
        //     printf("Name : %s\n",s[i].name);
        //     printf("Subject : %s\n",s[i].subject);
        //     printf("Roll_no.: %d\n",s[i].roll_no);
        //     printf("Year : %d",s[i].year);
        // }
        return 0;
}
