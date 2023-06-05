// --> A variable that stores the memory address of another variable is called POINTER.
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age; // * --> value at adrress
                     // & --> address of
    // int age2 = *ptr;
    
    // printf("%d\n" , _age );
    
    //address
   
    printf("%p \n" , &age); //hexadecimal
    printf("%u \n" , &age); //unassigned int

    printf("%p \n" , ptr);//addresed stored in pointer variable
    printf("%u \n" , ptr);

    printf("%p \n" , &ptr);// address of pointer
    printf("%u \n" , &ptr);

    //value
    
    printf("%d \n" , age);
    
    printf("%d \n" , *ptr);

    printf("%d \n" , *(&age));
    



    return 0;
}