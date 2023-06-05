#include<stdio.h>
int main(){
    printf("enter number\n");
    int num;
    scanf("%d" ,&num);
    if (num >= 0){
        printf("positive\n");
        if (num % 2 == 0){
            printf("even\n");
        }else{
                printf("odd\n");
        }
    }else{
        printf("negative\n");
         if (num % 2 == 0){
            printf("even\n");
        }else{
                printf("odd\n");
        }
    }
    


}       