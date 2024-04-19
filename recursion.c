#include<stdio.h>

int factorial(int);
int temp;

int main()
{
   printf("Factorial(5): %d\n", factorial(5));
}

int factorial(num)
{
    if(num <=1)
        return 1;
    return num*factorial(num-1);
}
