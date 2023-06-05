#include<stdio.h>
int main(){
    int marks; 
    scanf("%d", &marks);
       if (marks > 90){
        printf("a+\n");
    }else if( marks > 80){
        printf("b\n");
    }else{
        printf("fail\n");
    }

    return 0;
}