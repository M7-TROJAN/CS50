#include "stdio.h"
#include "cs50.h"
int main (){
    int x = 50 ; // integr variable

    int* px = &x ; // address of x

    printf("%p\n",&x); // print adress of x ... hexadesimal num

    printf("%p\n", px); // print adress of x ... hexadesimal num

    printf("%i\n", *px); // print value of x (50)

    printf("%p\n",*&x); // print value of x (50)
}