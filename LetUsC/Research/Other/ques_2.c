/*Program to add two complex number*/
// #include<stdio.h>
// struct complex
// {
//     float real;
//     float imag;
// };

// int main()
// {
//     struct complex n1,n2,result;

//     printf("Enter your complex number\n");
//     printf("Enter your 1st real complex number: ");
//     scanf("%f",&n1.real);
//     printf("Enter your 1st imag number:");
//     scanf("%f",&n1.imag);

    
//     printf("\nEnter your 2nd real complex number: ");
//     scanf("%f",&n2.real);
//     printf("Enter your 2nd imag number:");
//     scanf("%f",&n2.imag);
//     result.real = n1.real + n2.real;
//     result.imag = n1.imag + n2.imag;
    
//     printf("Sum of real complex number = %0.2f",result.real);
//     printf("\nSum of imag number = %f",result.imag);
//     return 0;
//}
#include<stdio.h>
typedef struct complex 
{
    float real;
    float imag;
}complex;
void result(float ,float );
int main()
{
    complex c ={4.6,7.0};
    // printf("%f %f",c.real,c.imag);
    result(c.real,c.imag);
    return 0;
}
void result(float r,float i)
{
    struct complex answer;
     answer.real = r + i;
     answer.imag = r * i;
      printf("%f\n",answer.real);
      printf("%f",answer.imag);
}