#include <stdio.h>
#include <stdlib.h>
struct customer
{
    int accno;
    char name[30];
    float balance;
};
struct transaction
{
    int accno;
    char trans_type;
    float amount;
};
int main()
{
    FILE *p, *q;
    int choice;
    struct customer c;
    struct transaction t;
    while (1)
    {
        printf("\n1. Print all accounts data.\n");
        printf("2. Print Specific accounts data.\n");
        printf("3. Add new customer.\n");
        printf("4. Close Account.\n");
        printf("5. Deposit Amount.\n");
        printf("6. Withdraw Amount.\n");
        printf("7. Exit.\n");
        printf("==> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            p = fopen("CUSTOMER.DAT", "r");
            while (fread(&c, sizeof(c), 1, p) == 1)
            {
                printf("Account No.     - %d\n", c.accno);
                printf("Customer Name   - %s\n", c.name);
                printf("Customer Balance- %.2f\n\n", c.balance);
            }
            fclose(p);
            break;
        }
        case 2:
        {
            p = fopen("CUSTOMER.DAT", "r");
            printf("Enter Account No. to print ");
            scanf("%d", &t.accno);
            while (fread(&c, sizeof(c), 1, p) == 1)
            {
                if (t.accno == c.accno)
                {
                    printf("Account No.     - %d\n", c.accno);
                    printf("Customer Name   - %s\n", c.name);
                    printf("Customer Balance- %.2f\n\n", c.balance);
                }
            }
            fclose(p);
            break;
        }
        case 3:
        {
            p = fopen("CUSTOMER.DAT", "a");
            printf("Enter Account No.     - ");
            scanf("%d", &c.accno);
            getchar();
            printf("Enter Customer Name   - ");
            gets(c.name);
            printf("Enter Customer opening Balance- ");
            scanf("%f", &c.balance);
            if (c.balance < 100)
            {
                printf("The minimum balance requirement not met.\n");
                printf("Please fill again with minimum 100rs account balance.");
            }
            else
            {
                fwrite(&c, sizeof(c), 1, p);
            }
            fclose(p);
            break;
        }
        case 4:
        {
            printf("Enter Account No. to close: ");
            scanf("%d", &t.accno);
            p = fopen("CUSTOMER.DAT", "r");
            while (fread(&c, sizeof(c), 1, p) == 1)
            {
                if (t.accno == c.accno)
                {
                    if (c.balance > 0)
                    {
                        printf("Please withdraw all money then close account.\n");
                        goto ex;
                    }
                }
            }
            fclose(p);
            {
                p = fopen("CUSTOMER.DAT", "r");
                q = fopen("temp.dat", "w");
                while (fread(&c, sizeof(c), 1, p) == 1)
                {
                    if (c.accno == t.accno)
                    {
                        printf("Account Closed Successfully.\n");
                    }
                    else
                    {
                        fwrite(&c, sizeof(c), 1, q);
                    }
                }
                fclose(p);
                fclose(q);
                remove("CUSTOMER.DAT");
                rename("temp.dat", "CUSTOMER.DAT");
            }
        ex:
            break;
        }
        case 5:
        {
            printf("Enter Account No. to deposit: ");
            scanf("%d", &t.accno);
            printf("Enter amount to deposit: ");
            scanf("%f", &t.amount);
            p = fopen("CUSTOMER.DAT", "r");
            q = fopen("temp.dat", "w");
            while (fread(&c, sizeof(c), 1, p) == 1)
            {
                if (c.accno == t.accno)
                {
                    c.balance += t.amount;
                    fwrite(&c, sizeof(c), 1, q);
                }
                else
                {
                    fwrite(&c, sizeof(c), 1, q);
                }
            }
            fclose(p);
            fclose(q);
            remove("CUSTOMER.DAT");
            rename("temp.dat", "CUSTOMER.DAT");
            printf("Amount Deposited Successfully.\n");
            break;
        }
        case 6:
        {
            printf("Enter Account No. to withdraw: ");
            scanf("%d", &t.accno);
            printf("Enter amount to withdraw: ");
            scanf("%f", &t.amount);
            p = fopen("CUSTOMER.DAT", "r");
            while (fread(&c, sizeof(c), 1, p) == 1)
            {
                if (t.accno == c.accno)
                {
                    if (c.balance < t.amount || c.balance-t.amount < 100 )
                    {
                        printf("Insufficient or minimum balance not allow you to proceed!\n");
                        goto ex1;
                    }
                }
            }
            fclose(p);
            {
                p = fopen("CUSTOMER.DAT", "r");
                q = fopen("temp.dat", "w");
                while (fread(&c, sizeof(c), 1, p) == 1)
                {
                    if (c.accno == t.accno)
                    {
                        c.balance -= t.amount;
                        fwrite(&c, sizeof(c), 1, q);
                    }
                    else
                    {
                        fwrite(&c, sizeof(c), 1, q);
                    }
                }
                fclose(p);
                fclose(q);
                remove("CUSTOMER.DAT");
                rename("temp.dat", "CUSTOMER.DAT");
                printf("Amount Withdrawal Successfully.\n");
            }
        ex1:
            break;
        }
        case 7:
        {
            exit(0);
            break;
        }
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}