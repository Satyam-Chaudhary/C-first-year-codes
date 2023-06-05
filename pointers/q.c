// print the value id 'i' from its pointer to pointer

#include<stdio.h>
int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("value of i --> %d\n" , **pptr); //i

    return 0;
}