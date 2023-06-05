// Writea C program to accept nnumbers and display the sum of the highest and lowest numbers.
#include<stdio.h>
int main(){
    int arr[10] ,max , min;
    printf("enter numbers\n");
    for(int i =0 ; i < 5 ; i++){
        scanf("%d" , &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(int i=0 ; i< 4 ; i++){
        if(arr[i+1] > arr[i]){
            max = arr[i+1];
        }
        if(arr[i+1] < arr[i]){
            min = arr[i=1];
        }
    }
    printf("max --> %d \n min --> %d \n", max , min);
    printf("result --> %d \n" , max + min);


    return 0;
}
