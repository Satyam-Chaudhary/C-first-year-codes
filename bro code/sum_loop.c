#include<stdio.h>
int main(){
    int sum = 0;
    int n = 3;
    for(int i= 0 ; i <=n ; i++ ){
        sum = sum+i;
        printf("%d\n",i);
    }
    printf("%d\n" ,sum);
    return 0;
}