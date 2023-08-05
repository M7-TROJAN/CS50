#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
typedef struct information {
    char first_name[15];
    char last_name[20];
    char phone[15];
    char address[100];
    char email[50];
}in;

int main(){
    FILE* myfile = fopen("in.cvs","a");
    in peoble[2];
    for(int i = 0 ; i < 2 ; i++){
        printf("enter your first name: ");
        scanf("%s",peoble[i].first_name);
        printf("enter your last name: ");
        scanf("%s",peoble[i].last_name);
        printf("enter your phone number: ");
        scanf("%s",peoble[i].phone);
        printf("enter your address: ");
        scanf("%s",peoble[i].address);
        printf("enter your email: ");
        scanf("%s",peoble[i].email);
        fprintf(myfile," name is: %s %s \n phone: %s \n address: %s \n email: %s \n\n\n",peoble[i].first_name,peoble[i].last_name,peoble[i].phone,peoble[i].address,peoble[i].email);
    }
    fclose(myfile);


}
// mood    ...............   delete   .............. create
//  r => read    .........     no     ..............   no
//  w => write   .........     yes    ..............   yes
//  a => append  .........     no     ..............   yes