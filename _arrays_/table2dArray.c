#include<stdio.h>
int main(){
    int arr[2][10];
    for(int i = 0 ; i < 10 ; i++){
        arr[0][i] = (2 * (i+1));
        arr[1][i] = (3 * (i+1));
        printf("%d  %d \n\n" , arr[0][i] , arr[1][i]);
        }
        
    } 
