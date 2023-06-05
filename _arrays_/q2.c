//function to reverse an array
#include<stdio.h>
void reverse(int arr[] , int n){ // call by reference as array is a pointer and it changes the value in original or main function
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
        
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d \t", arr[i]);
    }
    
}
int main(){
    int arr[10] = {5,45,6,4,32};
    int n = 5;
    reverse(arr , n);
    printf("\n");
   
}