//--> function to count odd numbers in an array
#include<stdio.h>
void odd(int arr[] ,int n);
int main(){
    int arr[100];
    
    int n = 10;
    odd(arr , n);
    // printf("%d \n" , *(arr+2)); 
    return 0;
}
void odd(int arr[] ,int n){
    printf("enter numbers\n");
    for(int i = 0 ; i < n ; i++)
{
    scanf("%d" , &arr[i]);
}
int flag = 0;
for (int i = 0; i < n; i++)
{

    if ( arr[i] % 2 != 0){
        printf("%d --> odd\n" , arr[i]);
        flag++;
    }

}
printf("number of odd numbers == %d\n", flag);
}