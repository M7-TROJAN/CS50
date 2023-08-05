#include "stdio.h"
#include "cs50.h"
#include "string.h"
int main (int argc , string argv[]){
    if(argc != 2){
         printf("sorry you don't have access\n");
         return 1 ;
    }
    else if(strcmp(argv[1],"m7")!=0){
        printf("sorry you don't have access\n");
        return 1 ;
    }
    printf("hello, %s\n",argv[1]);
    string names[] = {"ahmed","ali","mohamed","bola","pop","mattar","trojan","weka","sayed","mahmoud"};
    string search = get_string("search for?: ");
    for(int i = 0 ; i < 10 ; i++){
        if(strcmp(names[i],search)== 0){
            printf("found in %d steps\n",i + 1);
            return 0 ;
        }
    }printf(" sorry not found \n");
    return 1 ;




}