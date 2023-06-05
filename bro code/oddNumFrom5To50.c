//print all the odd numbers from 5 to 50
#include<stdio.h>
int main(){
    int i =5;
    do
    {
     if(i % 2 !=0){
       printf("%d\n",i);
     }
     i++;
    } while (i<=50);
    
    return 0;
}