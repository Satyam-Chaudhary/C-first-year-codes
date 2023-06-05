#include<stdio.h>
void printString(char arr[]){
for (int  i = 0; i < arr[i] != '\0' ; i++)
{
    printf("%c" , arr[i]);
}
printf("\n");
}


int main(){
    char firstNAME[] = {"SATYAM"};
    char lastName[] = {"CHAUDHARY"};
    printString(firstNAME);
    printString(lastName);
    
        return 0;
} 