#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent data
struct Data
{
    int id;
    char name[50];
    float salary;
};

// Function declarations
void writeToFile(FILE *file);
void readFromFile(FILE *file);
void modifyData(FILE *file, int targetId);
void deleteData(FILE *file, int targetId);

int main()
{
    FILE *p;
    int choice;
    int targetId;

    do
    {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Modify data\n");
        printf("4. Delete data\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        struct Data newData;
        struct Data readData;
        switch (choice)
        {
        case 1:
            p = fopen("data.dat", "ab"); // Open file in append binary mode
            // writeToFile(p);
            printf("Enter ID: ");
            scanf("%d", &newData.id);
            getchar();
            printf("Enter Name: ");
            // scanf("%[]s", newData.name);
            gets(newData.name);
            printf("Enter Salary: ");
            scanf("%f", &newData.salary);
            // Write the data to the file
            fwrite(&newData, sizeof(newData), 1, p);
            printf("Data written to file successfully.\n");
            fclose(p);
            break;
        case 2:
            p = fopen("data.dat", "rb");
            // readFromFile(p);
            printf("\nData read from file:\n");
            while (fread(&readData, sizeof(struct Data), 1, p) == 1)
            {
                printf("ID: %d, Name: %s, Salary: %.2f\n", readData.id, readData.name, readData.salary);
            }
            int tell;
            tell = ftell(p);
            printf("Tell the offset %d\n",tell);
            printf("Size of structure %d",sizeof(struct Data));
            fclose(p);
            break;
        case 3:
            printf("Enter the ID to modify: ");
            scanf("%d", &targetId);
            p = fopen("data.dat", "r+b"); // Open file in read/write binary mode
            modifyData(p,targetId);
            fclose(p);
            break;
        case 4:
            printf("Enter the ID to delete: ");
            scanf("%d", &targetId);
            p = fopen("data.dat", "r+b"); // Open file in read/write binary mode
            deleteData(p, targetId);
            fclose(p);
            break;
        case 5:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void writeToFile(FILE *file)
{
    struct Data newData;

    // Get data from the user
    printf("Enter ID: ");
    scanf("%d", &newData.id);
    printf("Enter Name: ");
    scanf("%s", newData.name);
    printf("Enter Salary: ");
    scanf("%f", &newData.salary);

    // Write the data to the file
    fwrite(&newData, sizeof(struct Data), 1, file);

    printf("Data written to file successfully.\n");
}

void readFromFile(FILE *file)
{
    struct Data readData;
    // Read and display data from the file
    printf("\nData read from file:\n");
    while (fread(&readData, sizeof(struct Data), 1, file) == 1)
    {
        printf("ID: %d, Name: %s, Salary: %.2f\n", readData.id, readData.name, readData.salary);
    }
}

void modifyData(FILE *file, int targetId)
{
    struct Data newData;

    // Find and modify data with the specified ID
    while (fread(&newData, sizeof(struct Data), 1, file) == 1)
    {
        if (newData.id == targetId)
        {
            printf("Enter new data for ID %d:\n", targetId);
            printf("Enter Name: ");
            // scanf("%s", newData.name);
            getchar();
            gets(newData.name);
            printf("Enter Salary: ");
            scanf("%f", &newData.salary);

            // Move the file pointer back to the beginning of the record
            fseek(file, -sizeof(struct Data), SEEK_CUR);

            // Write the modified data to the file
            fwrite(&newData, sizeof(struct Data), 1, file);

            printf("Data modified successfully.\n");
            return;
        }
    }

    printf("Data with ID %d not found.\n", targetId);
}

void deleteData(FILE *file, int targetId)
{
    struct Data dataToDelete;
    FILE *tempFile = fopen("temp.dat", "wb"); // Temporary file for rewriting data

    // Read data from the original file and write to the temporary file, excluding the specified ID
    while (fread(&dataToDelete, sizeof(struct Data), 1, file) == 1)
    {
        if (dataToDelete.id != targetId)
        {
            fwrite(&dataToDelete, sizeof(struct Data), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    // Remove the original file and rename the temporary file
    remove("data.dat");
    rename("temp.dat", "data.dat");

    printf("Data with ID %d deleted successfully.\n", targetId);
}
