// array is pointer in itself
//name of array is a ppinter pointing towards the 0th index of array

#include<stdio.h>
int main(){
    int aadhar[5];

    //input
    int *ptr = &aadhar[0]; // can be written as int *ptr = aadhar; // as it automatically points towards the 0th index
    for(int i =0 ; i < 5 ; i++){
        printf("%d index = " , i);
        scanf("%d" , ptr + i);
         //or 
        // scanf("%d" , aadhar[i]);

    }

    //output
     for(int i =0 ; i < 5 ; i++){
        printf("%d index = %d\n" ,i ,  *ptr);
        ptr ++;

        //or
        
        // printf("%d index = %d\n" ,i , aadhar[i]);
     }

    return 0;
}