// keep taking input from number until user enters odd number
#include<stdio.h>
int main(){
    for(int i=0; i >=0 ; i++){
        printf("enter num\n");
        int num;
        scanf("%d", &num);
        if(num % 2 != 0){
            break;
        }
    }
    printf("wrong input\n");
}
// CAN BE DONE BY DO WHILE LOOP