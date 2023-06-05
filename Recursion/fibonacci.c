// 0 1 1 2 3 5 8 13 21......
#include<stdio.h>
int fibonnaci(int n);
int fibonacciRecursion(int n);

int main(){
    int n = 8;
    // fibonnaci(n);
    int fibonacci = fibonacciRecursion(n);
    printf("%d \n" , fibonacci);
return 0;
}
// by loops

int fibonnaci(int n){
    int t1 = 0;
    int t2 = 1;
    printf("%d %d ", t1 , t2);
    for (int i = 0 ; i <= n - 3; i++){
    int t3 = t1 + t2;
    printf("%d " , t3);
    t1 = t2;
    t2 = t3;
    }
    printf("\n");

    return 0;
}
// by recursion
int fibonacciRecursion(n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibN2 = fibonacciRecursion(n-2);
    int fibN1 = fibonacciRecursion(n-1);
    int fibonnaci = fibN2 + fibN1;
    return fibonnaci;
}
