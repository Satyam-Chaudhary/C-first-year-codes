#include<stdio.h>
int main(){
    int n;
    printf("enter num to find factorial of : ");
    scanf("%d",&n);
    int f = 1;
    for(int i=1; i<=n; i++){
        f = f*i;
    }
    printf("%d\n",f);
    return 0;
}