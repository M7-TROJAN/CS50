#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int main(){
    int x[]={100,2,30,45,63,20,14,98,635,124,789,630,24,0,500,1000,720,21,71,710,80,-1,51};
    int temp;
    for(int i = 0 ; i < 23;i++){
        for(int j = 0 ; j < 23 - 1 ; j++){
            if(x[j]> x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }

        }


    }
    for(int i = 0 ; i < 23 ; i++){
        printf("%i , ",x[i]);
    }
    printf("\n");

}
