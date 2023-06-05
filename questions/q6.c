// 6. Write a program to count the occurrences of a number in a matrix
#include<stdio.h>
int main(){
    int arr[] = {1 ,2,1,2,1,2,3,5,2,1,3,4,2,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    printf("enter number to find\n");
    int a;
    scanf("%d" , &a);
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == a){
            count++;
        }
    }        
    printf("number of repetations is --> %d\n" , count);

}