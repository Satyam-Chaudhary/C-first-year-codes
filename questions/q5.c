// 5. Write a program to find whether the given number is an Armstrong number or not. (While loop only)
#include<stdio.h>
#include<math.h>
int main(){
    int n=0 , num , sum = 0;
    printf("enter num ; \n");
    scanf("%d" , &num);
    int temp = num;
    while(temp !=0){
        temp /= 10;
        n++;
    }
    printf("number of digits --> %d\n" ,n);

    int temp2 = num; //--> this initialisation is important
    while(temp2 !=0){
        int remainder = temp2 % 10;
        sum += pow(remainder , n);
        temp2 /= 10;
    }

    if(sum == num){
        printf("%d is an Armstrong number\n" , num);
    }
    else{
        printf("no it's not\n");
    }

return 0;

}