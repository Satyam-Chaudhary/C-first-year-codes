// any program can be done both by loops and recurssion
#include<stdio.h>
void hello(int n);
int main(){
    hello(5);
}
void hello(int n){
    if(n == 1){
        return;
    } 
    hello(n - 1);
    printf("hello world\n");
}