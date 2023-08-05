#include <stdio.h>
int main (){
    char* s1 = get_string("s1:");
    char* s2 = get_string("s2:");
    if(strcmp(s1,s2)==0){
        printf("same\n");
    }
    else{
        printf("not same\n");
    }


}

