#include<stdio.h>
int main(){
    char x = 'X';
    char y = 'Y';
    
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("x =%c\n",x);
    printf("y =%c\n",y);

    return 0;
}