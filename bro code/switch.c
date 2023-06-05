#include<stdio.h>
int main(){
    char day;
    printf("enter day (1-7)\n");// m- mom, t- tues, w- wed
    scanf("%c",&day);
    switch (day) //Cases can be any order
    {
        // case 1: printf("monday\n");
        //     break;
        // case 2: printf("tuesday\n");
        //     break;
        // case 3: printf("wednsday\n");
        //     break;
        // case 4: printf("thursday\n");
        //     break;
        // case 5: printf("friday\n");
        //     break;
        // case 6: printf("saturday\n");
        //     break;
        // case 7: printf("sunday\n");
        //     break;
        // default : printf("not valid\n");
        //     break;// not write then also fine in default



         case 'm': printf("monday\n");
            break;
        case 't': printf("tuesday\n");
            break;
        case 'w': printf("wednsday\n");
            break;
        case 'T': printf("thursday\n");
            break;
        case 'f': printf("friday\n");
            break;
        case 's': printf("saturday\n");
            break;
        case 'S': printf("sunday\n");
            break;
        default : printf("not valid\n");
            break;// not write then also fine in default

            //break not written  statement will be print below it 

    
    //NESTED SWITCH ARE ALLOWED

       
        }

    return 0;
    }
   



