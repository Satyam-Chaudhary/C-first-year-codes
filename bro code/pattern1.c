/*Write a program to print different patterns using nested loops.
1
12
123
1234
12345
123456

n rows
*/
#include<stdio.h>
int main(){
    int i,j,row;
    scanf("%d",&row);
    for(i = 1; i <= row; i++)
    { 
        for(j=1; j<=i; j++ )
        {
            printf("%d",j); 
        }
        printf("\n");
        }
    return 0;
} 

