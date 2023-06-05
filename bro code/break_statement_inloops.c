//break --> loop ends if break is satisfied in loop even if loop condition is still valid
#include<stdio.h>
int main(){
    for (int i = 0; i <= 5; i++)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n",i);
    }
    printf("end\n");
    

    return 0;
}
// breal --> takes you out of even nested loops as well so be careful