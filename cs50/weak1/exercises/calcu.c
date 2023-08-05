10
#include <stdio.h>
#include <cs50.h>
//avvrege
int main(){
    printf("welcome to the calculator. \n");
    int num1 = get_int("enter 1st number: ");
    int num2 = get_int("enter 2ed number: ");
    char op = get_char("what operating do you want?: ");
    if(op == '+'){
         printf("result= %.2f \n",(float)num1 + num2);
    }else if(op=='-'){
        printf("result= %.2f \n",(float)num1 - num2);

    }else if(op=='*'){
        printf("result= %.2f \n",(float)num1 * num2);
    }else if(op=='/'){
        printf("result= %.2f \n",(float)num1 / num2);
    }else if (op=='%'){
        printf("result= %d \n", num1 % num2);
    }else{
        printf("sorry i don't understand %c \n" , op);
        printf("you just can use (* + - / )");
    }





}
