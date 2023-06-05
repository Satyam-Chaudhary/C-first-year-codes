// A variable that stores the memory address of another pointer 
#include<stdio.h>
int main(){
    /*syntax
        int  **pptr; int **star;
        char **pptr;
        float **pptr;
    */

   float price = 100.00;
   float *ptr = &price; //stores addres of price
   float **pptr = &ptr; //stores addres of ptr

   printf("ptr - %p \n" , ptr);
   printf("pptr - %p\n" , pptr);

   printf("*ptr = price = %.2f \n" , *ptr); // price
   printf("pptr = ptr = %p \n ", *pptr); // ptr

    return 0;
}