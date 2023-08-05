#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE* myfile = fopen("phonebook.cvs","a");
    char* name = malloc(15);
    printf("enter your name: ");
    scanf("%s",name);
    char* number = malloc(15);
    printf("enter your phone number: ");
    scanf("%s",number);

    fprintf(myfile," name: %s \n phone number: %s\n",name,number);
    free(name);
    free(number);
    fclose(myfile);


}
// mood    ...............   delete   .............. create
//  r => read    .........     no     ..............   no
//  w => write   .........     yes    ..............   yes
//  a => append  .........     no     ..............   yes