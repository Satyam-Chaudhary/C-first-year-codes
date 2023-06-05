#include<stdio.h>
int factorial(int n);
int main(){
    printf("factorial is : %d \n" , factorial(5));


}
int factorial(int n){
    if (n == 1){
        return 1;
    }
    int facN1 = factorial(n - 1);
    int fac = facN1 * n;
    return fac;
}