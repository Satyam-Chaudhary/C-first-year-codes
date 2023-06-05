// we can send arrays as arguments in functions
#include<stdio.h>
//function declaratiom
void printNumbers(int arr[] , int n); // --> as array
//or
// void printNumbers(int *arr , int n);//--> as pointer
int main(){
    int arr[] = {1 , 2, 3 , 4};
    int n = 4;
    printNumbers(arr , n);

    return 0;
}
// void printNumbers(int *arr , int n){
//     for(int i = 0 ; i < n ; i++){
//         printf("%d \t" , *arr);
//         arr++;
//     }

void printNumbers(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d \t" , arr[i]);
    }

}