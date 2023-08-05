#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
typedef struct information {
    char name[10];
    int age;
    char address[20];
}in;

int main(){
    in peoble[2];
    for(int i = 0 ; i<2 ; i++){
        printf("name%i:",i+1);
        scanf("%s", peoble[i].name);
        printf("age: ");
        scanf("%i",&peoble[i].age);
        printf("address: ");
        scanf("%s",peoble[i].address);
    }
    char *s = malloc(20);
    printf("search for: ");
    scanf("%s",s);
    for(int i = 0 ; i < 2 ; i ++){
        if(strcmp(s,peoble[i].name)==0){
            printf("found in index number%i\n",i+1);
            printf("%s\n%i\n%s\n",peoble[i].name,peoble[i].age,peoble[i].address);
            return 0;
        }
    }
    printf("'%s' NOT FOUND\n",s);



}