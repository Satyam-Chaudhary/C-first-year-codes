//wrong
/*
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/
#include<stdio.h>
int main(){
    int i,j,row = 5;
    for (i = 5; i >= 1; i--){
    for (j = 1; j <= i; j++)
    {
        printf("%c ", '*');
    }
    printf("\n");
}

    return 0;
}