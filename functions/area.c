#include<stdio.h>
#include<math.h>
void square(float s);
void circle(float r);
void rectangle(float a , float b);
int main(){
    float s , r , a , b;
    char shape;
    printf("enter s for square , c for circle , r for rectangle \n ");
    scanf("%c" , &shape);

    switch(shape){
        case 's' : 
        printf("enter side \n");
        scanf("%f" , &s);
        square(s);
        break;

        case 'c':
        printf("enter radius \n");
        scanf("%f" ,&r);
        circle(r);
        break;

        case 'r':
        printf("enter legth and breadth \n");
        scanf("%f" ,&a);
        scanf("%f" ,&b);
        rectangle(a , b);
        break;

        default:
        printf("wrong input \n");
        break;

        return 0;
        }


}
void square(float s){
    printf("area of sqaure is --> %.2f \n" , pow(s , 2));
}
void circle(float r){
    printf("area of circle is --> %.2f \n" , (M_PI * pow(r , r)));

}
void rectangle(float a , float b){
    printf("area of rectangle --> %.2f \n" , (a * b));
}