#include<stdio.h>
int sum (int a , int b);
int main(){
    int a ,b ;
    printf("enter 1st number \n");
    scanf("%d" ,&a);
    printf("enter 2 nd number\n");
    scanf("%d" , &b);
    int add = sum(a , b);
    printf("sum is %d \n" , add);
    return 0;
    }
    int sum(int a , int b){
        return a + b;
    }
   