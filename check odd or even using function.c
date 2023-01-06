#include<stdio.h>
#include<stdlib.h>

//Write a program in C to check a given number is even or odd using the function.


void myfunction();

int main()
{
    int num;
    printf("please enter an integer :\n");
    scanf("%d",&num);
    
    printf("\n\n%d",num);
    
    myfunction(num);
   
    
}


void myfunction(int a)
{
    if (a%2==0){
        printf(" is even\n");
    }
    else{
        printf(" is odd\n");
    }
    

}


