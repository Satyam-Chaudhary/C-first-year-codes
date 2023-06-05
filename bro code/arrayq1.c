#include<stdio.h>
int main(){
    float price[3];
    printf("enter price of product 1: \n");
        scanf("%f" , &price[0]);
    printf("enter price of product 2: \n");
        scanf("%f" , &price[1]);
    printf("enter price of product 1: \n");
        scanf("%f" , &price[2]);
    price[0] = price[0] + price[0]* 0.18;
    price[1] = price[1] + price[1]* 0.18;
    price[2] = price[2] + price[2]* 0.18;
    printf("final price is \n %.2f \n %.2f \n %.2f\n", price[0] , price[1] , price[2]);
    return 0;
}