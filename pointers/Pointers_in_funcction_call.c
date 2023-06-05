// call by value and call by reference

 #include<stdio.h>
void square(int n);

void _square(int *n);

int main(){
    int number = 4;
    square(number); // value of variable as argument
    printf("number = %d\n", number);

    _square(&number); // adress of variable as argument
    printf("number = %d\n", number);
    return 0;
}

// CALL BY VALUE --> we pass value of variable as argument

void square(int n){
    n = n * n;
    printf("square = %d \n" , n);
}

// CALL BY REFERENCE --> we pass address of value as argument
void _square(int *n){
    *n = (*n) * (*n);
    printf("square = %d\n" , *n); 
}