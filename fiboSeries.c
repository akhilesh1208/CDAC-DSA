#include<stdio.h>

int fibo(int num);

int main()
{
    int i,NUM;
    printf(" Enter the count of fibonaci series:");
    scanf("%d",& NUM);
    for(i=0;i<NUM; ++i)
    {
        printf("%d -----> %d\n",i+1, fibo(i) );
    }
    
}
fibo( int num)
{
    if(num<=1)
        return num;
    return fibo(num-1)+fibo(num-2);
}
