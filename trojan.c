#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(int argc , char* argv[]){
    if(argc != 2){
        printf("ERORE\n");
        return 1;
    }
    if(strcmp("m7",argv[1])!= 0){
        printf("ERORE\n");
        return 1;
    }
    printf("\n\a"
           "\t\t**************************************\n"
           "\t\t*                                    *\n"
           "\t\t*                                    *\n"
           "\t\t*         Hello, Tro<m7>jan          *\n"
           "\t\t*                                    *\n"
           "\t\t*                                    *\n"
           "\t\t**************************************\n");

}