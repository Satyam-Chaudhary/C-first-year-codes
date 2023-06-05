#include<stdio.h>
#include<math.h>
void square(float a);
int main(){
    float a;
    printf("enter number : ");
    scanf("%f" ,&a);
    square(a);

    return 0;
}
void square(float a){
    float sq = pow(a , 2);
    printf("square of number is %f \n" ,sq);
}