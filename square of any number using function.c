#include<stdio.h>
#include<stdlib.h>

//Write a program in C to find the square of any number using the function.

int square(int);


int main()
{
    int num;
    printf("please enter a number:\n");
    scanf("%d",&num);
    
    printf("your number is: %d\nsquare of your number: %d\n",num,square(num));
}

int square(int a)
{
    int t;
    t = a*a;
    return t;
}


