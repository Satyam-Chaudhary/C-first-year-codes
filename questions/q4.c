// 4. Write a program to calculate the sum of cubes of first n numbers.
#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d" , &n);\
    int sum = 0;
    for(int i = 0 ; i <= n ; i++){
    sum += i*i*i;
    }
    printf("%d\n" , sum);
}