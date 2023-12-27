#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a character is present in the string
int contains(char* str, char c) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            return 1; // Character is present
        }
    }
    return 0; // Character is not present
}

// Function to remove a character from a string
void removeChar(char* str, char c) {
    int len = strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

char* inter(char* param_1, char* param_2) {
    // Create a copy of param_1 to modify
    char* modified_str = strdup(param_1);

    // Iterate through param_1 and remove characters not present in param_2
    for (int i = 0; i < strlen(param_1); i++) {
        if (!contains(param_2, param_1[i])) {
            removeChar(modified_str, param_1[i]);
        }
    }

    // Remove duplicates in the modified string
    int len = strlen(modified_str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len;) {
            if (modified_str[i] == modified_str[j]) {
                removeChar(modified_str, modified_str[j]);
                len--; // Adjust length after removal
            } else {
                j++;
            }
        }
    }

    return modified_str;
}


int main() {
    // Example usage:
    char* string1 = "padinton";
    char* string2 = "paqefwtdjetyiytjneytjoeyjnejeyj";

    char* result = inter(string1, string2);
    printf("Modified String: %s\n", result);
    free(result);

    return 0;
}


// ***Description
// Write a function that takes two strings and return, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.