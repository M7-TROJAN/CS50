#include <stdio.h>
#include <cs50.h>

//برنامج لحساب النسبة المؤية

float discount (float reg , int percent);

int main (void){

    float reg = get_float("enter the price: \n");
    int percent = get_int("Enter the discount value: \n");
    float sale = discount(reg , percent);

    printf("the price after sale is %.2f \n" , sale);


    }

float discount (float reg , int percent){
    return reg * (100 - percent)/100 ;
}

