#include<stdio.h>
int main(){
    int array[] = {15, 5, 20, 35, 2, 42, 67 ,17};
    int a;
    int found = 0; // use to see if data is present or not
    printf("enter data\n");
    scanf("%d", &a);
    int i = 0;
    for(i = 0; i < 8 ;i++){
        if(array[i] == a){
            printf("position is %d\n", i+1);
            found = 1;
            break; // take ypu out of loops as well
       }     
    }
    // if(i == 8){
    //     printf("not present\n");
    // }
    //OR use temp variable

     if(found == 0){
     printf("not present\n");
     }

    return 0;
}
