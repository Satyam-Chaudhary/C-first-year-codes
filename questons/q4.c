// Write a program to calculate the sum of cubes of first n numbers.
#include<stdio.h>
#include<math.h>
int main(){
    int n , sum;
    printf("enter n: \n");
    scanf("%d" , &n);
    int arr[30];
    for(int x = 0; x < n ; x++){
        arr[x] = x;
    }
    int i = 0;
    while ( i <= n)
    {
        sum = pow(arr[i],3);
        sum += pow(arr[i],3);
        i++;
    }
    
    printf("%d \n" , sum);
    
}