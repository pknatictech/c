/*
Given a text file, write a program to create another text file deleting the words "a", "the", "an" and replace each one of them with a blank space.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hi my a name is the robot";
    char word[] = "a ";
    remove_word(str, word);
    printf("%s", str);
    return 0;
}
void remove_word(char *str, char *match)
{
    int matlen = strlen(match);
    int i = 0, j = 0, len = strlen(str);

    while (i < len)
    {
        int found = 1;
        for (int k = 0; k < matlen; k++)
        {
            if (str[i + k] != match[k])
            {
                found = 0;
                break;
            }
        }
        if (found)
        {
            // Shift characters to overwrite the matched word
            for (j = i; j < len - matlen; j++)
            {
                str[j] = str[j + matlen];
            }
            len = len - matlen;
            str[j] = '\0';
            i = 0; // Reset i to 0 to check for more occurrences
        }
        else
        {
            i++; // Move to the next character
        }
    }
}
