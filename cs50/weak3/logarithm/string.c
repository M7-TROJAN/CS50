#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main (){
    int length = get_int("how many degits: ");
    char* names[length];
    for(int i = 0 ; i < length ; i++){
        names[i]=get_string("name%i: ",i+1);

    }
    char* answer = get_string("you wana search for any name?\n choose (y for yes ), (n for no)\n: ");
    if(strcmp(answer,"y")!=0 && strcmp(answer,"n")!=0){

        do{
            answer = get_string("sorry i dont understand '%s'\n choose (y for yes ), (n for no)\n: ",answer);

        }while(strcmp(answer,"y")!=0 && strcmp(answer,"n")!=0);

    }
    if (strcmp(answer,"n")==0){
        printf("ok bey.\n");
        return 0;
    }
    string search = get_string("search for: ");
    for(int x = 0 ; x < length; x++){
        if(strcmp(names[x],search)==0){
            printf("found in index number%i\n",x+1);
            return 0 ;
        }
    }
    printf("not found \n");
    return 1 ;




}