#include <stdio.h>

// Define a structure to represent a person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create an array of structures
    struct Person people;
    char ch = 'y';
    // Writing the array of structures to a file
    FILE *writeFile = fopen("people.dat", "wb");

    while (ch == 'y')
    {
        printf("Enter the name ,age,height : ");
        scanf("%s %d %f",people.name,&people.age,&people.height);
        fputs("\n",writeFile);
        fwrite(&people,sizeof(people),1,writeFile);
        printf("Do you want to enter mote data : ");
        getchar();
        scanf("%c",&ch);
    }
    fclose(writeFile);
    
    // Reading the array of structures from the file
    struct Person readPeople[3];
    FILE *readFile = fopen("people.txt", "rb");
    if (readFile != NULL) {
        fread(readPeople, sizeof(struct Person), 3, readFile);
        fclose(readFile);

        // Displaying the read data
        printf("\nData read from file:\n");
        for (int i = 0; i < 3; ++i) {
            printf("Person %d:\n", i + 1);
            printf("Name: %s\n", readPeople[i].name);
            printf("Age: %d\n", readPeople[i].age);
            printf("Height: %.2f\n\n", readPeople[i].height);
        }
    } else {
        printf("Error opening file for reading.\n");
        return 1;
    }

    return 0;
}
