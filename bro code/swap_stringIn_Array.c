#include<stdio.h>
#include<string.h>
int main(){
    char x[15] = "Water";
    char y[15] = "Sting";

    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("%s \n", x);
    printf("%s \n", y);


    return 0;
}