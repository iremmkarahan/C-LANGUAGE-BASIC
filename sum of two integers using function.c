#include <stdio.h>
#include <stdlib.h>

int sum(int,int);

int main(){
    
    int num1,num2,total;
    printf("please enter the first number:\n");
    scanf("%d",&num1);
    
    printf("please enter the second number:\n");
    scanf("%d",&num2);
    
    total = sum(num1,num2);
    
    printf("the sum of two integers :%d\n",total);
    
    
}

int sum(int a, int b){
    
    int t;
    t = a+b;
    return t;
}

 
