#include<stdio.h>
int main(){
    char name[300];
    printf("enter name : \n"); 
    scanf("%s" , name); //--> no need to use & as name is an array which in itself is a pointer
    printf("%s\n" , name);

    //--> to get whole string we use gets and puts

}