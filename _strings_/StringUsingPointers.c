// string --> char array --> array --> pointers
//string can be changed if accesed via pointer method
#include<stdio.h>
int main(){
    char *name = {"satyam chaudhary"};
    puts(name);

    char *canChange = "hello world";
    canChange = "Hello"; // can be changed
    puts(canChange);

    char CannotChange[100] = {"Hello world"};
    puts(CannotChange);
    // CannotChange = {"hello"} 
    return 0;


}