#include<stdio.h>
int calcPercentage(int science , int maths , int sanskrit);
int main(){
    int sc = 98;
    int ma = 100;
    int sa = 99;
    int perc = calcPercentage(sc , ma, sa);
    printf("percentage = %d \n" , perc);
    return 0;
}
int calcPercentage(int science , int maths , int sanskrit){
    return ((science + maths + sanskrit)/3);
}