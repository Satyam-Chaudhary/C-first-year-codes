#include<stdio.h>
#include<string.h>
void salt(char arr[]){
    char salt = "123";
    char newpass[100];
    strcpy(newpass , arr);
    strcat(newpass , salt); 
    puts(newpass);
}
    
int main(){
    char str[100];
    printf("enter string : ");
    scanf("%s" ,str);
    salt(str);
    return 0;
}