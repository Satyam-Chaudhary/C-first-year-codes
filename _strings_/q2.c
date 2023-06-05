#include<stdio.h>
void length(char arr[]){
    int c = 0;
    while(arr[c] != '\0'){
        c++;
    }
    printf("lenght of string is --> %d\n" , c - 1);
}
int main(){

    char name[100];
    fgets(name , 100 , stdin);
    length(name);
    puts(name);
    return 0;
}