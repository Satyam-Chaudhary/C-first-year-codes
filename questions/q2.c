// 2. Write a program to convert decimal number to hexadecimal number.
#include<stdio.h>
int main(){
int decimal , remainder;
scanf("%d" , &decimal);
int hex[100];
int quotient = decimal;
for (int i = 0; quotient == 0 ; i++){
    quotient = quotient/16;
    remainder = decimal % 16;
    hex[i] = remainder;
}
for (int i = 0; i < 3 ; i++)
{
    printf("%d" , hex[i]);
}

}