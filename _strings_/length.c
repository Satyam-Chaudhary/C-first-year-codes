#include<stdio.h>
int countLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
            count++;
        }
    
    return count - 1; //as i counts '\0'
    
}
int main(){
char name[100];
fgets(name , 100 , stdin);
printf("length --> %d\n" , countLength(name));
return 0;
}
