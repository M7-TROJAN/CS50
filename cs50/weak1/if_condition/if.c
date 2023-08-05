#include <stdio.h>
#include <cs50.h>


int main(void){
    int num1 = get_int("enter 1st number \n");
    int num2 = get_int("enter 2ed number \n");

    if( num1 > num2){
        printf( "num1 is bigger than \n num2" );


    } else if (num1 < num2){
        printf("num1 is less than num2 \n");
    } else{
        printf("num1 = num2 \n");
    }








}
