//scanf fails to do the task as it fails after one word
#include<stdio.h>

int main(){
    char name[100];
    gets(name);
    puts(name);

    char name2[100];
    fgets(name , 100 , stdin);
    puts(name);
    return 0;
}