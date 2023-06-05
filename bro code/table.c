#include<stdio.h>
int main(){
    int table;
    printf("enter number to print table of\n");
    scanf("%d", &table);
    for(int i =1 ; i<=10 ; i++){
        printf("%d\n", table*i);
    }
    return 0;
}