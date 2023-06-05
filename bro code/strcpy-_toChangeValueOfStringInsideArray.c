#include<stdio.h>
#include<string.h> //help in changing string values inside array
int main(){
    // NEED NOT TO GIVE MAXIMUM VALUE OF ROWS
    char cars[][10] = {"MUSTANG" , "MERCERDES" , "AUDI"};
    //cars[][0] = "TESLA"; --> can't change the value like this in arrays nned to include #include<string.h>
    strcpy(cars[0], "TESLA"); //string copy to change string value inside string
    for(int i=0; i < sizeof(cars)/sizeof(cars[0]); i++){
            printf("%s ",cars[i]);
        }
    return 0;
} 