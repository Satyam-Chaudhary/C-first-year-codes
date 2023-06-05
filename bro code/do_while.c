#include<stdio.h>
int main(){
    int i =1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<10);//1 will be printed no matter what in do while loop as initial staement is done before checking the condition
    
    return 0;
}