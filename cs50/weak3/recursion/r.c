#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void rec(int n);
int main(){
    rec(3);
}
void rec(int n){
    if(n==0){return;}

    printf("hello, world\n");
    rec(n-1);
}