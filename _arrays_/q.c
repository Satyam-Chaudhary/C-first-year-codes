// Write a program to enter price of 3 items & print their final cost with gst.
#include<stdio.h>
int main(){
    //initialization of array
    
    int sample[] = {1 ,12, 23, 21};
      //or  // --> if initialized and value given at same array will be initailaized even without specifying the number of elements
    int samole2[3] = {1, 12, 23, 21};
    
    float items[3];
   
    printf("enter price of all three items : \n");
  
    for(int i = 0 ; i < 3 ; i++){
        scanf("%f" , &items[i]);
        items[i] = items[i] + 0.18 * items[i];
    }

     for(int i = 0 ; i < 3 ; i++){
        printf("item %d price --> %.3f \n" , i , items[i]);
    }
    
     return 0;
}