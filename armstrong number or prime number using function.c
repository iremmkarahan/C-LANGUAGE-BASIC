#include<stdio.h>
#include<stdlib.h>

//iki ayri fonksiyon olusturarak bir tam sayinin asal mi yoksa armstrong mu yoksa her ikisi mi oldugunu kontrol etmeyi saglayan programi yaziniz//


void prime(int);
void armstrong(int);

int main(){
    int num;
    printf("please enter a number:\n");
    scanf("%d",&num);
    
    prime(num);
    armstrong(num);
    
}

void prime(int d){
    int i,count=0;
    for (i=2 ; i<d ; i++){
        if(d%i==0){
            count++;
        }
    }
    if (count>1){
        printf("\n%d not a prime number\n",d);
        
    }
    else {
        printf("\n%d prime number\n",d);
    }
    
}
            
void armstrong (int e){
    int digit,count=0,temp,r,sum=0;
    temp = e;
    while(e>0){
        r = e%10;
        sum = sum +(r*r*r);
        e = e/10;
    }
    if (temp==sum){
        printf("\n%d is armstrong number\n\n",temp);
    }
    else {
        printf("\n%d is not armstrong number\n\n",temp);
    }

    
}




