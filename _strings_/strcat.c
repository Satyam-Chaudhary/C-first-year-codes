//CONCATENATION
#include<string.h>
#include<stdio.h>
int main(){
    char firstStr[100] = "Hello"; //firstStr length >= l1 + l2
    char secStr[] = "World";
    strcat(firstStr , secStr);
    puts(firstStr);
    return 0;
}