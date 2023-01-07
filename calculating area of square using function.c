#include<stdio.h>
#include<stdlib.h>

//karenin alanini hesaplayan fonksiyonu hazirlayip mainde kullanan programi yaziniz//

int myfunction(int);

int main(){
    int a;
    printf("please enter the side of square:");
    scanf("%d",&a);
    
    printf("area of the square: %d\n\n",myfunction(a));
   
    
    
}

int myfunction(int d){
    int t;
    t= d*d;
    return t;
}
