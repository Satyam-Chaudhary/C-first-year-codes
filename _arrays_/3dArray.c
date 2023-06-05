#include<stdio.h>
int main(){
    int arr[3][3];
    printf("scan\n");
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0 ;j < 3 ; j++)
        {
        scanf("%d" ,&arr[i][j]);
    }
    }
        for(int j = 0 ;j < 3 ; j++)
        {
            printf("%d\t" , arr[0][j]);
        }
    printf("\n");
        for(int j = 0 ;j < 3 ; j++)
        {
            printf("%d\t" , arr[1][j]);
        }
    printf("\n");

        for(int j = 0 ;j < 3 ; j++)
        {
            printf("%d\t" , arr[2][j]);
        }
    printf("\n");


    
}