#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int main(){

    int age ;
    printf("enter your age: ");
    scanf("%i",&age);

    //................................................................

    char *first_name = malloc(20);
    printf("enter your first name: ");
    scanf("%s",first_name);

                // || or

               // طريثة اخري باستخدام الاراي وبدون استخدام المالوك

    char last_name[20];
    printf("enter your last name: ");

    scanf("%s",last_name);

    //................................................................

    printf(" your name is: %s %s\n you are %i years old\n",first_name,last_name,age);


}
