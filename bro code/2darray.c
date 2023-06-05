#include<stdio.h>
int main(){
    //2d array --> an array where each element is an entire array
    //useful if you nedd matrix , grid or table of data
    int numbers[2/*number of rows*/][3/*number of columns*/] = {
                        {2, 4, 6},
                        {3, 5, 7}
                        };
    //need to specify th size of each array in 2d array
    printf("%d\n", numbers[0][1]);
    return 0;
}