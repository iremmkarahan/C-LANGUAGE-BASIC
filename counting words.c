#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//girilen cumleyi  parametre olarak alip icerisindeki kelime sayisini bulan fonksiyonu yaziniz//

int  sentence(char str[],int);

int main(){
    char str[100],count=0;
    
    
    printf("%d words in this string\n",sentence(str,count));
    
}

int sentence(char str1[],int c){
    
    int i;
    c=0;
    printf("please enter a sentence:\n");
    gets(str1);
    
    for (i=0 ; str1[i]!='\0' ; i++){
        if (str1[i]==' ' && str1[i+1]!=' '){
            c++;
        }
    }
    return c+1;
    
}
   
        
        
        
        

