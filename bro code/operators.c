#include<stdio.h>
int main(){
    // 1 - true , 0 -- false

    // printf("%d\n" , 4<5);
    //     printf("%d\n" , 3>2);
    //         printf("%d\n" , 76<5);
    //             printf("%d\n" , 4 != 5);
    //                 printf("%d\n" , 4 != 4);
    //                     printf("%d\n" , 4 == 4);

    // logical operators
    printf("%d\n", 5>4 && 6>3); //and operator
    printf("%d\n" , 3>4 || 4>3); // or operator
    printf("%d\n", !(5>1 && 5>4 ));// not(!) operator

    //assignment operator
    int a = 2;
    int b = 3;
    printf("%d\n", a += b);

    //q
    // int num;
    // printf("enter num\n");
    // scanf("%d",& num);
    // printf("%d\n", num % 2 == 0); // can be done by if-else also
    // logical operarator ha ve higher priority than assignment operator

    printf("%d/n", 8^8); // not 64 as ^ doesn't mean power

    //
    int ismonday = 0;
    int israining =1;
    printf("%d\n" , ismonday || israining);

    
    return 0;
}