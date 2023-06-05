#include<stdio.h> // --> pre processor directive containig libaray function
//declaration
void print_hello();
int sum(int a , int b){ //function defined at declaration only
    return a + b;
}
void namaste();
void bonjour();
void wrong();
void hey();
void ni_hao();

int main(){ //compiler always start from main function
    print_hello(); //calling functon
    // int add = sum(10 , 20);
    // printf("%d\n" , add);
    char ch;
    printf("Enter f for french and i for indian \n");
    scanf("%c" , &ch);
    if(ch == 'i'){
        namaste();
    } else if (ch == 'f'){
        bonjour();
    } else {
        wrong();
    }

    // A function gets called directly or indirectly from main function
    hey(); //ni_hao() function is called to main indirectly

}

//defining function
void print_hello(){ 
    printf("helllo world\n");
}
void namaste(){
    printf("Namaste \n");
}
void bonjour(){
    printf("Bonjour \n");
}
void wrong(){
    printf("wrong input \n");
}
void hey(){
    printf("hey \n");
    ni_hao();
}
void ni_hao(){
    printf("ni hao \n");
}