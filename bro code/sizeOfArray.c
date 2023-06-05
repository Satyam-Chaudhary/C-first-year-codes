// we can add elements in array freely without any change in code
#include<stdio.h>
int main(){
    int array[] = {12 , 13, 15, 16, 17, 18};
    // printf("%d bytes\n",sizeof(array));

    for(int i =0 ; i < sizeof(array) / sizeof(array[0]) ; i++){
        printf("%d\n", array[i]);
    }


    return 0;
}