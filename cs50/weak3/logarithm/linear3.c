#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(){
    int length= get_int("how many length ?: ");
    string names[length];
    for(int i = 0 ; i < length ; i++){
        names[i]= get_string("enter name%d: ",i+1);
    }
    char answer;
    for(int i = 0 ; i<1;i--){
        answer = get_char("you wana search for any thing? (type 'y' for yes , 'n' for no): ");
        if(answer =='y' || answer == 'n'){
            i=i+1000;
        }

    }

    if(answer == 'n'){
        printf("ok bey \n");
        return 0 ;

    }else if (answer == 'y'){
        string search = get_string("search for: ");
        for(int x =0 ; x < length; x++ ){
            if(strcmp(names[x],search)==0){
                printf("found in %d steps\n",x+1);
                return 0 ;
            }
        }
        printf("sorry '%s' not found\n",search);
        return 1 ;
    }
}

