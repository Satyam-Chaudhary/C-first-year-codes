#include<stdio.h>
int main(){
    char ch;
    printf("enter alphabet\n");
    scanf("%c",&ch);

    if(ch >='A' && ch <='Z'){
        printf("Uppecase\n");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("lowercase\n");
    }else{
        printf("Not english letter\n");
    }
    
    return 0;
}