#include <stdio.h>
#include <cs50.h>
int main(){
    int x[3];
    x[0] = get_int("x: ");
    x[1] = get_int("x: ");
    x[2] = get_int("x: ");
    printf("average is: %f\n",(x[0]+x[1]+x[2])/3.0);

}