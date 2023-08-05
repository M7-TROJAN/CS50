#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct{
    string name;
    string number;
    int age ;

}pb;
int main(void){
    int length = get_int("length: ");
    pb peoble[length];
    for(int i = 0 ; i < length;i++){
        peoble[i].name=get_string("name%d: ",i+1);
        peoble[i].number=get_string("number: ");
        peoble[i].age=get_int("age: ");
        printf("Saved successfully\n");
    }
    string search = get_string("search for?: ");
    for(int i = 0 ;i< length ; i++){
        if(strcmp(peoble[i].name,search)==0){
            printf("found his number is %s / age is: %i\n",peoble[i].number,peoble[i].age);
            return 0 ;
        }
    }
    printf("not found \n");
    return 1 ;



}

