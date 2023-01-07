#include<stdio.h>
#include<stdlib.h>

 //bir sayinin cift mi tek mi oldugunu kontrol eden fonksiyonu ve kullanimini gosteren programi yaziniz//

void myfunction();

int main(){
    int num;
    printf("please enter a number:\n");
    scanf("%d",&num);
    
    printf("number : %d",num);
    myfunction(num);
}

void myfunction(int d)
{
    if (d%2==0){
        printf(" is even\n");
        
    }
    else {
        printf(" is odd\n");
    }
}

