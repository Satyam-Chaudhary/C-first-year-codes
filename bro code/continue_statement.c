#include<stdio.h>
int main(){
    for(int i=0; i<=10; i++){
        if(i == 3){ //skip
            continue;
        }
        printf("%d\n" ,i);
    }
    return 0;
}
//when break can't be used and we just need to skip a particular statement then we use continue 