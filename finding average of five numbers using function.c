#include<stdio.h>
#include<stdlib.h>

//fonksiyona gonderilen bes sayinin ortalamasini hesaplayip geri donduren programi yaziniz//

int myfunction(int ,int ,int, int, int);

int main(){
    int a,b,c,d,e;
    printf("please enter 5 integers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    printf("average : %d\n\n",myfunction(a,b,c,d,e));
    
}

int myfunction(int d ,int e,int f,int g,int h){
    int t;
    t = (d+e+f+g+h)/5;
    return t;
}
