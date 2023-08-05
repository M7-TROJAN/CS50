#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void swap(int* a , int* b);
int main(){
    int x = 4 ;
    int y = 3 ;

    swap(&x,&y);

    printf("x: %d\n",x);
    printf("y: %d\n",y);




}
void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}