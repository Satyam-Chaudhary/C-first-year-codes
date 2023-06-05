#include<stdio.h>

int main(){
    int arr[2][3];
    printf("enter marks of student 1 : \n");
    for (int i = 0 ; i < 3 ; i++){
        scanf("%d" , &arr[0][i]);
    }

    printf("enter marks of student 2 : \n");
    for (int i = 0 ; i < 3 ; i++){
        scanf("%d" , &arr[1][i]);
    }

    printf("marks of student 1 and 2 are \n");
        for (int j = 0 ; j < 3 ; j++){
        printf("%d\t" , arr[0][j]);
        }

     printf("\n\n");
        for (int j = 0 ; j < 3 ; j++){
        printf("%d\t" , arr[1][j]);

        }
    }



