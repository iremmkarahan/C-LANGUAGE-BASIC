#include<stdio.h>
#include<stdlib.h>

//Write a program in C to check whether a number is a prime number or not using the function.

void prime(int);

int main()
{
    int num;
    printf("please enter an integer:\n");
    scanf("%d",&num);
    
    printf("\n\nyour number: %d",num);
    
    prime(num);
    
}

void prime(int n)
    {
    int j,count=0;
    for (j=2 ; j<=n ; j++){
        if(n%j==0){
            count++;
        }
        else{
            
        }
    }
    if (count==1)
    {
        printf(" is prime number\n");
        
    }
    else
    {
        printf(" is not prime number\n");
    }
    
    
    
    
    
    }
