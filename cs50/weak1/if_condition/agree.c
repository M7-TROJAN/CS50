#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void agree(char answer);
int main (void){
    char answer = get_char("are you agree?(type 'y' for yes 'n' for no: )");
    agree(answer);

}
void agree(char answer){
    if(answer=='y'||answer=='Y'){
        printf("you are agree\n");
    }
    else if(answer=='n'||answer=='N'){
        printf("you are dissagree\n");

    }
    else{
        answer=get_char("sorry i dont understand '%c' just type 'y' for yes 'n' for no: ",answer);
            agree(answer);
    }


}