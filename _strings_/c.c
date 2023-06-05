//take each characte input
#include<stdio.h>
int main(){
    char string[100];
    char ch;
    int i = 0;

    while(ch != '\n'){ //till user press enter
        scanf("%c" , &ch);
        string[i] = ch;
        i++;
    }

    string[i] = '\0';
    
    puts(string);
}