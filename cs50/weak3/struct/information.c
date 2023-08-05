#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main (){
    typedef struct informations{
        char* name;
        char* p_num;
        int age;
        int height;
        int weight;
        char* email;
        char* address;
        char* blood_type;
        char* Educational_Qualification;

    }in;
    int length = get_int("how many degits?: ");
    in peoble[length];
    for(int i = 0 ; i < length ; i++){
        peoble[i].name= get_string("name: ");
        peoble[i].p_num= get_string("enter phone number: ");
        peoble[i].age= get_int("enter age: ");
        peoble[i].height= get_int("enter height: ");
        peoble[i].weight= get_int("enter weight: ");
        peoble[i].email= get_string("enter email: ");
        peoble[i].address= get_string("enter address: ");
        peoble[i].blood_type= get_string("enter blood type: ");
        peoble[i].Educational_Qualification= get_string("Educational_Qualification: ");


    }
    char* answer = get_string("you wana search for any one?\n type (yes or y) for yes , (no or n) for no\n: ");
    if(strcmp(answer,"y")!=0 && strcmp(answer,"n")!=0 && strcmp(answer,"yes")!=0 && strcmp(answer,"no")!=0){
        do{
            answer = get_string("sorry i dont understand '%s'!?\n type (yes or y) for yes , (no or n) for no:   ",answer);

        }while(strcmp(answer,"y")!=0 && strcmp(answer,"n")!=0 && strcmp(answer,"yes")!=0 && strcmp(answer,"no")!=0);
    }
    if(strcmp(answer,"n")==0 || strcmp(answer,"no")==0){
        printf("ok bey.\n");
        return 0;

    }
    char* search = get_string("search for: ");
    for(int i = 0 ; i < length ;i++){
        if(strcmp(search,peoble[i].name)==0){
            printf("found in index number %d\n",i+1);
            printf("name is: %s\nphone number: %s\nage: %i\nheight: %i\nweight: %i\n",peoble[i].name,peoble[i].p_num,peoble[i].age,peoble[i].height,peoble[i].weight);
            printf("email: %s\naddress: %s\nblood type: %s\nEducational Qualification: %s\n",peoble[i].email,peoble[i].address,peoble[i].blood_type,peoble[i].Educational_Qualification);
            return 0;
        }
    }
    printf("'%s' Not Found\n ",search);
    return 1 ;




}
