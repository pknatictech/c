

// #include<stdio.h>
// void display1(int);
// void display2(int*);
// int main()
// {
// 	int i;
// 	int marks[] = {55,65,75,56,78,98,78 };
// 	for(i=0;i<=6;i++)
// 	display1(marks[i]);
// 	printf("\n");
// 	for(i=0;i<=6;i++)
// 	display2(&marks[i]);
// 	return 0;
// }
// void display1(int m)
// {
// 	printf("%d ",m);
// }
// void display2(int*m)
// {
// 	printf("%d ",*m);
// }

// #include<stdio.h>
// int main() {
//     // int numbers[5] = { 1, 2, 3, 4, 5 };
//     // for(int i=0;i<=4;i++)
//     // {
//     //     printf("%d ",i[numbers]);
//     // }
//     double i;
//     printf("%f",sizeof(i));
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     long long int intType;
//     long double floatType;
//     double doubleType;
//     char charType;

//     // sizeof evaluates the size of a variable
//     printf("Size of int: %zu bytes\n", sizeof(intType));
//     printf("Size of float: %zu bytes\n", sizeof(floatType));
//     printf("Size of double: %zu bytes\n", sizeof(doubleType));
//     printf("Size of char: %zu byte\n", sizeof(charType));

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,i;
//     printf("Enter the size of array = ");
//     scanf("%d",&a);
//     int arr[a];
//     for(int j=0;j<=4;j++)
//     {
//         scanf("%d",&arr[a]);
//     }
//     printf("%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[3]);
//     printf("%d\n",arr[4]);
//     // for(i=0;i<=4;i++)
//     // {
//     //     printf("%d ",arr[i]);
//     // }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, i, *arr;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     arr = (int*)malloc(n*sizeof(int));

//     printf("Enter the elements of the array:\n");
//     for(i = 0; i < (n+1); i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("The elements of the array are:\n");
//     for(i = 0; i < (n+1); i++) {
//         printf("%d ", arr[i]);
//     }
//     free(arr);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int arr[5] = {1,2,3,4,5};
//     int arr2[5];
//     printf("Actual Values");
//     for(int y=0;y<=4;y++)
//     {
//         printf("%d ",arr[y]);
//     }
//     for(i=4,j=0;j<=4,i>=0;j++,i--)
//     {
//         arr2[j]=arr[i];
//     }
//     printf("\nReversed Values ");
//     for(int x=0;x<=4;x++)
//     {
//         printf("%d ",arr2[x]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i;
//     double a;
//     printf("%u\n",&i);
//     printf("%u",&a);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a=5,b=2;
//     int c;
//     c=pow(a,b);
//     printf("%d",c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[3][3] = {{10,20,30},{99,98,97},{50,60,70}};
//     printf("%d %d %d \n",arr[0][0],arr[0][1],arr[0][2]);
//     printf("%d %d %d \n",arr[1][0],arr[1][1],arr[1][2]);
//     printf("%d %d %d \n",arr[2][0],arr[2][1],arr[2][2]);
//     printf("%d %d %d \n",*&arr[0][0],*&arr[0][1],*&arr[0][2]);
//     printf("%d %d %d \n",*&arr[1][0],*&arr[1][1],*&arr[1][2]);
//     printf("%d %d %d \n",*&arr[2][0],*&arr[2][1],*&arr[2][2]);
//     printf("%d %d %d \n",**arr,*(*arr+1),*(*arr+2)); // we can write **arr instead of *(*arr+0)
//     printf("%d %d %d \n",arr[0][0]+1,*arr,*arr+1);
//     return 0;
// }

// #include<stdio.h>
// void fun(int );
// int main()
// {
//     int arr[5] = {1,2,3,4,5},i;
//     for(i=0;i<5;i++)
//     {
//         fun(arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j=25;
//     int *pi,*pj = &j;
//     *pj = j+5;
//     printf("%d \n",*pj);
//     i = *pj + 5;
//     printf("%d \n",i);
//     pi = pj;
//     printf("%d \n",pj);
//     printf("%d \n",*pj);
//     *pi = i+j;
//     printf("%d \n",*pi);
//     printf("%d \n",*(pi+2));
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x[3][5] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7},*n;
//     n = x[0];
//     printf("%d\n",*n);
//     printf("%d\n",*(*(x+2)+1));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     const float x = 3.14;
//     printf("%f\n",x);
//     int y = x+1;
//     printf("%d\n",y);
//     return 0;
//  }

// #include<stdio.h>
// int main()
// {
//     int a = 'A';
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 6;
//     if (a > 5)
//     {
//         printf("Every block of code is a function");
//     }
//     else
//     {
//         printf("False");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     float pi = 3.14,x;
//     const float y = 12.5;
//     pi = pi *2;
//     x = y + 2;
//     printf("%f",x);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
// int n,i;
// printf("Enter the elements of array");
// scanf("%d",&n);
// int arr[n];
// int temp=n-1;
// for(i=0;i<n;i++)
// {
//     printf("Enter the element no. %d = ",i+1);
//     scanf("%d",&arr[i]);
// }
// for(i=0;i<(n/2);i++)
// {
    
//     if(arr[i]==arr[temp-i])
//     {
//         printf(" Array[%d] = %d is equal to array[%d] = %d \n",i,arr[i],temp-i,arr[temp-i]);
//     }
    
// }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n = 21,ui,ci;
//     while (n>1)
//     {
        
//         printf("Please input a number between 1 to 4 ");
//         scanf("%d",&ui);
//         if(ui>0 && ui<5)
//         {
//         n=n-ui;
//         printf("Matchsticks Left = %d \n",n);
//         printf("Now computer pick the number\n");
//         ci = 5-ui;
//         printf("Computer picked %d\n",ci);
//         n=n-ci;
//         printf("Matchsticks Left = %d \n",n);
//         }
//         else
//         {
//             printf("Please pick a valid number\n");
//         }
//     }
//     printf("Because 1 matchstick left you lose the game!!!");    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num=1,i,counter=0;
//     for(num=1;num<=300;num++)
//     {
//         for(i=1,counter=0;i<=num;i++)
//         {
//             if(num%i==0)
//             {
//                 counter++;
//             }
//         }
//         if(counter==2)
//         {
//             printf("%d ",num);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=1,j,k,count;
//     while(i<=30000)
//     {
//         count=0;
//         j=1;
//         while(j*j*j<=i)
//         {
//             k=j;
//             while(j*j*j+k*k*k<=i)
//             {
//                 if(j*j*j+k*k*k==i){
//                 count++;
//                 }
//                 k++;
//             }
//             j++;
//         }

//         if(count==2)
//         {
//             int a = 1,b;
//             printf("%d ",i);
//             while(a<=i)
//             {
//                 b=a;
//                 while(b<=i)
//                 {
//                     if(a*a*a+b*b*b==i)
//                     printf("(%d %d)",a,b);
//                     b++;
//                 }
//                 a++;
//             }
//             printf("\n");
//         }
//         i++;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int matrix[4][5] = {
//         {15, 30, 28, 19, 61},
//         {1, 2, 3, 4, 5},
//         {10, 20, 30, 40, 50},
//         {100, 200, 300, 400, 500}
//     };
//     printf("%d",sizeof(matrix)/sizeof(matrix[0][0]));
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int i,j,n=1,row;
//     printf("Enter the rows = ");
//     scanf("%d",&row);
//     for(i=1;i<=row;i++)
//     {
//         for(j=row-i;j>=1;j--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             if(i==1 || j==1 || j == )
//             {
//                 n=1;
//                 printf("%d",n);
//             }
//             else
//             {
//                 n = n * (i-j+1)/j;
//                 printf(" %d",n);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }






// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float x , y , r , phai;
//     printf("Enter the value of X =");
//     scanf("%f",&x);
//     printf("Enter the value of Y =");
//     scanf("%f",&y);
//     r = sqrt(x*x + y*y);
//     phai = atan(y/x);
//     phai = phai*180/3.14;
//     printf("Polar co-ordinates r and phai %.2fmm and %.2f degree",r,phai);
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[] = "yanshi",str2[] = "Dutta";
//     char temp [10];
//     char str[3][10]= {"Aligarh","Mathura","Agra"};
//     // strcpy(temp,str[1]);
//     // strcpy(str[1],str[0]);
//     // strcpy(str[0],temp);
//     for(int i = 0 ; i<3;i++)
//     {
//         printf("%s\n",str[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
// char ch;
// char s[100],sen[100];
// scanf("%c",&ch);
// scanf("%s",s);
// scanf("\n");
// scanf("%[^\n]%*c", sen);
// printf("%c\n",ch);
// printf("%s\n",s);
// printf("%s\n",sen);
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     struct abc
//     {
//         int a;
//         char b;
//     };
//         printf("%d",&abc);
//     return 0;
// }




// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float angle, radian, vsin, vcosine,sum;
//     printf("Enter the Angle : ");
//     scanf("%f", &angle);
//     radian = angle * (3.14/180);
//     // vsin=sin(radian);
//     // printf("vsine %f\n", vsin );
//     // vcosine=cos(radian);
//     // printf("cosine %f\n", vcosine);
//     // vsin = vsin*vsin;
//     // vcosine = vcosine*vcosine;
//     // sum = vsin+vcosine;
//     // printf("\n%f",sum);
//     if((sin(radian)*sin(radian)+ cos(radian)*cos(radian))==1)
//     {
//         printf("The program work succefully");
//     }
//     else
//     {
//         printf("There is some mistake");
//     }
//     return 0;
// }


// #include <stdio.h>
// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
// int max_of_four(int a, int b, int c, int d)
// {
//     int max = a;
//     if(b>max)
//     max=b;
//     if(c>max)
//     max =c;
//     if(d>max)
//     max = d;
//     return max;
// }
// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_STRING_LENGTH 100

// int main() {
//     char *strings[6]; // Array of pointers to store strings
//     char buffer[MAX_STRING_LENGTH]; // Temporary buffer for input
    
//     printf("Enter 6 multiword strings:\n");
    
//     for (int i = 0; i < 6; i++) {
//         printf("Enter string %d: ", i + 1);
//         scanf("%99[^\n]%*c", buffer); // Read multiword string
        
//         // Allocate memory for the string and copy it into the array
//         strings[i] = strdup(buffer);
//     }
    
//     // Display the entered strings
//     printf("\nEntered strings:\n");
//     for (int i = 0; i < 6; i++) {
//         printf("String %d: %s\n", i + 1, strings[i]);
//         free(strings[i]); // Free allocated memory
//     }
    
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     int numNames;
    
//     printf("Enter the number of names: ");
//     scanf("%d", &numNames);
    
//     getchar(); // Consume the newline character after the integer input
    
//     for (int i = 0; i < numNames; i++) {
//         char fullName[100];
//         printf("Enter the full name: ");
//         fgets(fullName, sizeof(fullName), stdin);
        
//         // Remove the newline character from the input
//         fullName[strcspn(fullName, "\n")] = '\0';
        
//         char abbreviatedName[100] = "";
//         int length = strlen(fullName);
//         int j = 0;
        
//         for (int i = 0; i < length; i++) {
//             if (i == 0 || fullName[i - 1] == ' ') {
//                 abbreviatedName[j++] = fullName[i];
//             }
//         }
        
//         abbreviatedName[j] = '\0';
//         printf("Abbreviated Name: %s\n", abbreviatedName);
//     }
    
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     int names;
//     printf("Enter the range how many names you want : ");
//     scanf("%d",&names);
//     getchar();
//     int x;
//     for(x=0;x<names;x++)
//     {
//     char str[50];
//     printf("Enter the name : ");
//     gets(str);
//     char str2[50];
//     int len = 0,i;
//     len = strlen(str);
//     for(i=0;i<=len;i++)
//     {
//         if(i==0)
//         str2[0]=str[i];
//         if(str[i]== ' ' )
//         str2[1] = str[i+1];
//     }
//     str2[2] = '\0';
//     printf("%s\n",str2);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct Node {
//     int data;
//     struct Node *next;
// } node;

// void insert(node *pointer, int data)
// {
//     node *start = pointer;

//     while (pointer->next != start)
//     {
//         pointer = pointer->next;
//     }
    
//     pointer->next = (node *)
//     malloc(sizeof(node));
//     pointer = pointer->next;
//     pointer->data = data;
//     pointer->next = start;
//     printf("%d entered.\n", data);
// }

// int find(node *pointer, int key)
// {
//     node *start = pointer;
//     pointer = pointer->next;
//     while (pointer != start)
//     {
//         if (pointer->data == key)
//         {
//             return 1;
//         }
//         pointer = pointer->next;
//     }
//     return 0;
// }

// void delete(node *pointer, int data)
// {
//     node *start = pointer;
//     while(pointer->next!=start &&
//     (pointer->next)->data != data)
//     {
//         pointer = pointer->next;
//     }
//     if(pointer->next==start)
//     {
//         printf("Element %d is not present in the list\n",data);
//         return;
//     }
//     node *temp;
//     temp = pointer->next;
//     printf("%d deleted.\n",data);
//     pointer->next = temp->next;
//     free(temp);
//     return;
// }

// void print(node *start, node *pointer)
// {
//     if (pointer == start)
//     {
//         return;
//     }
//     printf("%d ", pointer->data);
//     print(start, pointer->next);
// }

// int main()
// {
//     node *start, *temp;
//     start = (node *) malloc(sizeof(node));
//     temp = start;
//     temp->next = start;
//     printf("1. Insert\n");
//     printf("2. Delete\n");
//     printf("3. Print\n");
//     printf("4. Find\n");
//     while (1)
//     {
//         int query;
//         scanf("%d", &query);
//         if (query == 1)
//         {
//             int data;
//             scanf("%d", &data);
//             insert(start, data);
//         }
//         else if (query == 2)
//         {
//             int data;
//             scanf("%d", &data);
//             delete (start, data);
//         }
//         else if (query == 3)
//         {
//             printf("The list is ");
//             print(start, start->next);
//             printf("\n");
//         }
//         else if (query == 4)
//         {
//             int data;
//             scanf("%d", &data);
//             int status = find(start, data);
//             if (status)
//             {
//                 printf("Element Found\n");
//             }
//             else
//             {
//                 printf("Element Not Found\n");
//             }
//         }
//     }
// }

// #include<stdio.h>
// struct new_node 
//     {
//         int data;
//         struct new_node *next;
//     }
// int main()
// {
//     struct new_node *head ,*middle ,*last;
//     head = malloc(sizeof(struct new_node));
//     middle = malloc(sizeof(struct new_node));
//     last = malloc(sizeof(struct new_node));

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to push an element onto the stack
// void push(struct Node** top, int data) {
//     struct Node* newNode = createNode(data);
//     newNode->next = *top;
//     *top = newNode;
//     printf("%d pushed onto the stack\n", data);
// }

// // Function to pop an element from the stack
// int pop(struct Node** top) {
//     if (*top == NULL) {
//         printf("Stack is empty\n");
//         exit(1);
//     }
//     struct Node* temp = *top;
//     int data = temp->data;
//     *top = temp->next;
//     free(temp);
//     return data;
// }

// // Function to check if the stack is empty
// int isEmpty(struct Node* top) {
//     return top == NULL;
// }

// // Function to print the elements of the stack
// void printStack(struct Node* top) {
//     if (top == NULL) {
//         printf("Stack is empty\n");
//         return;
//     }
//     printf("Stack elements: ");
//     while (top != NULL) {
//         printf("%d ", top->data);
//         top = top->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* top = NULL; // Initialize an empty stack

//     // Push elements onto the stack
//     push(&top, 10);
//     push(&top, 20);
//     push(&top, 30);

//     // Print the stack
//     printStack(top);

//     // Pop an element from the stack
//     int popped = pop(&top);
//     printf("Popped element: %d\n", popped);

//     // Print the stack again
//     printStack(top);

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to push an element onto the stack
// void push(struct Node** top, int data) {
//     struct Node* newNode = createNode(data);
//     newNode->next = *top;
//     *top = newNode;
//     printf("%d pushed onto the stack\n", data);
// }

// // Function to pop an element from the stack
// int pop(struct Node** top) {
//     if (*top == NULL) {
//         printf("Stack is empty\n");
//         exit(1);
//     }
//     struct Node* temp = *top;
//     int data = temp->data;
//     *top = temp->next;
//     free(temp);
//     return data;
// }

// // Function to check if the stack is empty
// int isEmpty(struct Node* top) {
//     return top == NULL;
// }

// int main() {
//     struct Node* top = NULL; // Initialize an empty stack

//     push(&top, 10);
//     push(&top, 20);
//     push(&top, 30);

//     printf("Stack elements: ");
//     while (!isEmpty(top)) {
//         printf("%d ", pop(&top));
//     }
//     printf("\n");

//     return 0;
// }


