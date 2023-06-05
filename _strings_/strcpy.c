#include<string.h>
#include<stdio.h>
int main(){
    char name[100];
    char name2[100];
    fgets(name, 100 , stdin);
    fgets(name2 , 100 , stdin);
    puts(name);
    puts(name2);
    strcpy(name2 , name);
    puts(name2);

    return 0;
}