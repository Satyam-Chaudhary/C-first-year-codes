// Input 10 float numbers from the user in a 1D array.
#include<stdio.h>
int main(){
    float arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%f" , &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%f \n" , arr[i]);
    }
    
}