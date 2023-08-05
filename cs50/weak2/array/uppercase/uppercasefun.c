#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(){
    string text = get_string("text: ");
    for(int i = 0 ; i < strlen(text); i++){
        printf("%c", toupper(text[i]));
    }
    printf("\n");

}