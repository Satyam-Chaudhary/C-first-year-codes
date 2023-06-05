// Write a function to calculate the sum, product & average of 2 numbers. Print that sum, product and average in the main function.

// need to return more than one value --> pointers will do the job

#include<stdio.h>
void doWork(int a , int b , int *sum ,int *product ,int *avg);
int main(){
    int a = 3 , b = 5;
    int sum , product , avg;
   
    doWork(a , b, &sum , &product , &avg);
    
    printf("sum --> %d\n" , sum);
    printf("product --> %d\n" , product);
    printf("average --> %d\n" , avg);


    return 0;
}

// more tha one return type no problem for pointers

void doWork(int a , int b , int *sum ,int *product ,int *avg){ // a and b --> pass by value // sum , product , average --> pass by refernce
    *sum = a + b;
    *product = a * b;
    *avg = (a + b)/2;
}