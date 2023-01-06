#include<stdio.h>
#include<stdlib.h>

//Write a program in C to swap two numbers using function.

void swap();

int main()
{
    int num1,num2;
    printf("please enter number1 :\n");
    scanf("%d",&num1);
    
    printf("please enter number2 :\n");
    scanf("%d",&num2);
    
    printf("Before swapping\n\nnumber1: %d\nnumber2: %d",num1,num2);
    swap(num1,num2);
    
   
}

void swap(a,b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf("\n\nAfter swapping\n\nnumber1: %d\nnumber2: %d\n",a,b);

}


