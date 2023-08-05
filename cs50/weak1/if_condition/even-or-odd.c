#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("hello, I can tell you if the number is even or odd . \n");

    printf("Let's Go \n");

    int h = get_int("enter your number: ");

    if(h %2 == 0)
    {
       printf("the number is even \n");


    }
    else{
        printf("the number is odd \n");
    }




}