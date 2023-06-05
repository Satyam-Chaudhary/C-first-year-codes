// --> change to parameters in function don't change the values in calling function, because a copy of argument is passed to the function
#include<stdio.h>
void tax(float value);
int main(){
    float value = 100.0;
    tax(value); //copy of value or argument is passed thus causing no change in value in main function
    printf("value is --> %.2f \n" ,value); // no change in value due to change in value in function

    return 0;
}
void tax(float value){
    value = value + (0.18 * value);
    printf("value after tax is %.2f \n" , value);

}