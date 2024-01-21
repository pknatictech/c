#include <stdio.h>
struct customers
{
    int acc_no;
    char name[50];
    int balance;
};
void search_account_no(struct customers a[5], int b)
{
    for (int i = 0; i <= 4; i++)
    {
        if (b == a[i].acc_no)
        {
            printf("Name : %s\n", a[i].name);
            printf("Accont_no.: %d\n", a[i].acc_no);
            printf("Balance : %d\n", a[i].balance);
        }
    }
}
void balance(struct customers d[5])
{
    for (int i = 0; i <= 4; i++)
    {
        if (d[i].balance <= 1000)
        {
            printf("Name : %s\n", d[i].name);
            printf("Account_no.: %d\n", d[i].acc_no);
            printf("Balance : %d\n", d[i].balance);
        }
        printf("\n");
    }
}
void deposit(struct customers y[5], int u, int x)
{
    for (int i = 0; i <= 4; i++)
    {
        if (u == y[i].acc_no)
        {
            y[i].balance = y[i].balance + x;
        }
    }
}
void withdrawl(struct customers z[5], int m, int n)
{
    for (int i = 0; i <= 4; i++)
    {
        if (z[i].acc_no == m)
        {

            if (z[i].balance-n < 1000)
            {
                printf("Yor balance is unsufficient\n");
            }
            else
            {
                z[i].balance = z[i].balance - n;
                printf("Amount withdrawled successfully\n");
            }
        }
    }
    
}
void allaccprint(struct customers a[5])
{
    printf("Accountno.\tName\t\t\tBalance\n");
    printf(" _______________________________________________\n");
    for(int i = 0;i<=4;i++)
    {
        printf("| %d\t|\t%s\t|\t%d\t|\n",a[i].acc_no,a[i].name,a[i].balance);
    }
    printf("`````````````````````````````````````````````````\n");
}
int main()
{
    int acc_no;
    struct customers c[5] =
        {
            {23089, "Pankaj Yadav", 5400},
            {24398, "Daya Basti", 990},
            {29832, "Aparna Varshney", 78},
            {21546, "Sumit Mishra", 2100},
            {23154, "Yash Kant", 100},
        };
    int n = 1;

    while (n != 0)
    {
        printf("**********************************************");
        printf("\n1. Find Accont detail\n2. Check account balance below 1000Rs.\n3.deposit account\n4.Withdrawal ballance\n5.Print all accounts details\n6. Close bank \n");
        printf("Choose the option : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter Account number :");
            scanf("%d", &acc_no);
            search_account_no(c, acc_no);
            break;

        case 2:
            balance(c);
            break;

        case 3:
            int amt, acc;
            printf("Enter the account number : ");
            scanf("%d", &acc);
            printf("How much mony do you want to deposite : ");
            scanf("%d", &amt);
            deposit(c, acc, amt);
            printf("Amount depsite successfully\n");
            break;

        case 4:
            int money, accont;
            printf("Enter the accont number : ");
            scanf("%d", &accont);
            printf("How much money do you want to withdrwl : ");
            scanf("%d", &money);
            withdrawl(c, accont, money);
            break;

        case 5:
            allaccprint(c);
            break;
        case 6:
         n = 0; 
        }
    }

    return 0;
}