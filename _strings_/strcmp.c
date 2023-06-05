//string comparison
// 0 --> string equal
//positive -> first > second(ascii)
//negative --> second > first(ascii)
#include<string.h>
#include<stdio.h>
int main(){
    char firstStr[] = "satyams";
    char secStr[] = "Satyam";
    printf("%d\n" , strcmp(firstStr , secStr)); // negative as satyam > aditya
    printf("%d\n" , strcmp(secStr , firstStr));
    return 0;
}