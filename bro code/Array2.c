// input and store data in array
#include<stdio.h>
int main(){
    int marks [2];
    printf("enter physics marks : ");
    scanf("%d" ,&marks[0]);
    printf("ennter psuc marks : ");
    scanf("%d", &marks[1]);
    printf("marks in physics and psuc are %d %d \n" ,marks[0],marks[1]);
    return 0;
}