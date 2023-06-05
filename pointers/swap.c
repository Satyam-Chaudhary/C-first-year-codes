// swap two number a and b using function call
#include<stdio.h>
void swap(int a , int b);
void _swap(int *a, int *b);
int main(){
    int a = 5;
    int b = 10;
    //Call by Valuep
    printf("\n");
    printf("CALL BY VALUE\n\n");
    swap(a , b); //copy //value passed as argument
    
    printf("a --> %d  b --> %d\n\n" ,a , b); //no change


    //Call by reference
    printf("CALL BY REFERENCE\n\n");
    _swap(&a , &b); // addres value as argument
    printf("a --> %d  b --> %d\n" ,a , b); //change done by function due to address as argument
   
    // int temp  = b;
    // b = a;
    // a = temp;
    // printf("a --> %d  b --> %d\n" ,a , b);
    return 0;
}
void swap(int a , int b){
    int temp = b;
    b = a;
    a = temp;
    printf("a --> %d  b --> %d\n" ,a , b);
}
void _swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
    printf("a --> %d  b --> %d\n" ,*a , *b);
}

