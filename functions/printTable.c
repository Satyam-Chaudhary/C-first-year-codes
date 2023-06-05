#include<stdio.h>
void printTable(int n);
int main(){
    int n;
    printf("enter n \n");
    scanf("%d" , &n);
    printTable(n); //argument or actual paprameter

    return 0;
}
void printTable(int a) //parameter or formal parameters
{ 
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n" , (i * a));
    }
    
}