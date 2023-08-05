#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct list{
    string name;
    string phone_number;
    int age;
    int height;
    int weight;
    string adress;


}ls;
int main(){
    int length = get_int("how many peoble: ");
    ls peoble[length];
    for(int i = 0 ; i < length ; i++){
        peoble[i].name=get_string("name%i:",i+1);
        peoble[i].phone_number=get_string("phone number: ");
        peoble[i].age=get_int("age: ");
        peoble[i].height=get_int("his height: ");
        peoble[i].weight=get_int("his weight: ");
        peoble[i].adress=get_string("adress: ");
        printf("Saved successfully\n");


    }
    string search = get_string("search for: ");
    for(int i = 0 ; i < length ; i++){
        if(strcmp(search,peoble[i].name)==0){
            printf("found\n");
            printf("name is: %s\n phone number is: %s\n age is: %i\n his height is: %i\n his weight is:%i\n his adress is: %s\n",peoble[i].name,peoble[i].phone_number,peoble[i].age,peoble[i].height,peoble[i].weight,peoble[i].adress);
            return 0;
        }
    }
    printf("not found\n");
    return 1 ;


}