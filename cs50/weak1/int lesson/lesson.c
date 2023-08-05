#include <stdio.h>
#include <cs50.h>


int main(void){

    int num1 = get_int("enter first number : ");
    printf("the number you choose is %i \n" , num1);
    float num2 = get_float("enter second number :");
    printf("the number you choose is %f \n" , num2);
     char c = get_char("enter the char : \n");
    printf("is %c \n" , c);
    long l = get_long("inter the number : \n");
    printf("hello, %li \n" , l);


   int x = get_int("enter your num1: ");
   int y = get_int("enter your num2: ");
   printf("hello, %d  \n" , x + y);
   printf("hello, %d  \n" , x - y);
   printf("hello, %d  \n" , x * y);
   printf("hello, %d  \n" , x / y);
   printf("hello, %d  \n" , x % y);


}