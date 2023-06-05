#include<stdio.h>
int main(){
    int n = 0 , num ;
    printf("enter num : \n");
    scanf("%d" , &num);
    while(num != 0){
        num /= 10;
        n++;
    }
    printf("number of digits --> %d\n" , n);

    return 0;
}