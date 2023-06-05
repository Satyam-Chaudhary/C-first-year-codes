// Write a program to list all the leap years from 1900 to 1920 using a do- while loop
#include<stdio.h>
int main(){
    printf("leap years are :\n");
    int i = 1900;
    do
    {
        if(i % 4 == 0){
        printf("%d \n" ,i);
        }
        i++;

    } while (i <= 1920);
    
}