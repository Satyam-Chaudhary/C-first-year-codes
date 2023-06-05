// keep taking input from number until user enters odd number by do while loop
// do while --> print the statement then check the condition
#include<stdio.h>
int main(){
    int n;
    do
    {
        printf("enter num : ");
        scanf("%d", &n);
        printf("%d\n", n);
                // if odd number is given then it will be print once
        if (n % 2 != 0 ){
            break;
        }
    } while(1);
    printf("Thanks\n");
    

    return 0;
}
