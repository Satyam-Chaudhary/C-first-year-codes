// --> A character array terminated by a '\0' character(null character)
#include<stdio.h>
int main(){
    char name[] = {'S' , 'A' , 'T' , 'Y' , 'A' , 'M' , '\0'}; // --> IF NULL CHARACTER NOT PUT THEN STRING WILL NO BE DECLARED BUT A NORMAL CHAR ARRAY WILL BE INITIALISED
    //OR
    char name2[] = {"SATYAM"}; // no need of null character if written like this

    char class[] = {"BTECH D2"};
    
    for (int i = 0; i < 7; i++)
    {
        printf("%c" , name[i]);
    }
    printf("\n\n");
     for (int i = 0; i < 7; i++)
    {
        printf("%c" , name2[i]);
    }
    
    
    return 0;
}
