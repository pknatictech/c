#include <stdio.h>

int main() {
   char isbn[11];  // Array to store the ISBN code
   int i, sum = 0, weight = 10;

   printf("Enter the ISBN code (10 digits, X for 10):\n");
   scanf("%s", isbn);

   // Check for invalid length or first digit 'X'
   if (strlen(isbn) != 10 || isbn[0] == 'X') {
       printf("Invalid ISBN code\n");
       return 1;
   }

   // Calculate the weighted sum
   for (i = 0; i < 10; i++) {
       if (isbn[i] == 'X') {
           sum += 10 * weight;
       } else if (isbn[i] >= '0' && isbn[i] <= '9') {
           sum += (isbn[i] - '0') * weight;
       } else {
           printf("Invalid ISBN code (contains non-digit characters)\n");
           return 1;
       }
       weight--;
   }

   // Check if the sum is divisible by 11
   if (sum % 11 == 0) {
       printf("Valid ISBN code\n");
   } else {
       printf("Invalid ISBN code\n");
   }

   return 0;
}
