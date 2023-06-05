#include<stdio.h>
int main(){
    int age = 22;
    int _age = 24;
    int *ptr = &age;
    int *_ptr = &_age;
   
    //value of pointers
    printf("ptr = %u\n_ptr = %u\n" , ptr , _ptr);
   
    //difference --> pointer differencce can be done to same data types i.e char and int won't have any difference
    printf("difference = %u \n" , ptr - _ptr); // pointers can be subtracted // 1 will be printed not 4 as difference is given in integer data type

    //comparison
    printf("comparison = %u\n" , ptr == _ptr); // 0 --> false

    _ptr = &age;
    printf("comparison = %u\n" , ptr == _ptr); // 1 --> true
    
    return 0;
}