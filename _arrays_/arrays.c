//Arrys --> collection of similar //data types// stored at //contiguous or continous// memory location

#include<stdio.h>
int main(){

    int marks[5];
    
    printf("enter phy : ");
    scanf("%d" , &marks[0]);

    printf("enter math : ");
    scanf("%d" , &marks[1]);

    printf("ennter chem : ");
    scanf("%d" , &marks[2]);

printf("phy = %d\nchem = %d\nmath = %d\n", marks[0] , marks[2] , marks[1]);
    return 0;
}