// pointer can be incremented or decremented
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    
    printf("ptr = %u \n" , ptr);
    printf("*ptr = %d \n" , *ptr);
    
    ptr++; // int is of 4 byte it will increment by 4
   
    printf("ptr = %u \n" , ptr);
    printf("*ptr = %d \n" , *ptr);
    
    ptr--;
    
    printf("ptr = %u \n" , ptr);
    printf("*ptr = %d \n" , *ptr);

    return 0;
}