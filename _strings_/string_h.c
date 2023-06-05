//standard library of string
#include<stdio.h>
#include<string.h>
int main(){
    char name[] = {"satyam chaudhary"};
    int length = strlen(name); // excludes null character
    printf("length --> %d \n" , length); // strlen --> doesn't count null character and return unsigned long need to be type casted
}
//strlen needs to be typecasted to int from unsigned long
