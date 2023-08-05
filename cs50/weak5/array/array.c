
#include<stdio.h>
int main(){
    int x[5];
    x[0]=1;
    x[1]=2;
    x[2]=3;
    x[3]=4;
    x[4]=5;
/*
     لاضافة عنصر سادس وهوالرقم 6 x للاراي دي  resizing قم بعمل
*/

// answer:-

    int s[6];
    for(int i = 0 ; i < 5 ; i++){
        s[i] = x[i];
    }
    s[5]=6;
    for(int i = 0 ; i < 6 ; i ++){
        printf("%i ",s[i]);
    }
    printf("\n");




}