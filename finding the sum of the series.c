#include<stdio.h>
#include<stdlib.h>


//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function

int fact(int);

int main()
{
    int sum;
    
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    
    printf("The sum of the series is : %d\n\n",sum);
}

int fact(int n)
    {
    int f=1,j;
    for (j=1 ; j<=n ; j++){
        f = f*j;
    }
    return f;
    }
