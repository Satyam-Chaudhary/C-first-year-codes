#include<stdio.h>
int main(){
    //int i;-- counter or iteration
    //for(initialistaion; condition; increment)
    for (int i = 0 ; i <= 10; i++)//if int inside loop then int considerd only till loop functions
    {
        // printf("Satyam\n");
        printf("%d\n",i);
    }
    int n;
    scanf("%d",&n);
    for (int i = n; i >=1 ; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
