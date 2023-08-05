#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
typedef struct phonebook{
    char first_name[20];
    char last_name[20];
    char phone[15];
    int age;
    char address [100];
    int hight;
    int weight;
    char email[50];
}pb;
int main(){

    printf("\n"
           "\t\t**************************************\n"
           "\t\t*                                    *\n"
           "\t\t*         Hello, Tro<m7>jan          *\n"
           "\t\t*                                    *\n"
           "\t\t**************************************\n");

    FILE *myfile = fopen("phonebook.cvs","a");
    int length;
    printf("how many degits: ");
    scanf("%i",&length);
    pb person[length];
    for(int i = 0 ; i < length ; i++ ){
        printf("enter your first name: ");
        scanf("%s",person[i].first_name);
        printf("enter your last name: ");
        scanf("%s",person[i].last_name);
        //...............................
        printf("enter your phone: ");
        scanf("%s",person[i].phone);
        //...............................
        printf("enter your age: ");
        scanf("%i",&person[i].age);
        //...............................
        printf("enter your address: ");
        scanf("%s",person[i].address);
        //...............................
        printf("enter your hight: ");
        scanf("%i",&person[i].hight);
        //................................
        printf("enter your weight: ");
        scanf("%i",&person[i].weight);
        //................................
        printf("enter your email: ");
        scanf("%s",person[i].email);
        //..........................
        fprintf(myfile," name: %s %s\n",person[i].first_name,person[i].last_name);
        fprintf(myfile," phone number: %s\n",person[i].phone);
        fprintf(myfile," age: %i\n address: %s\n",person[i].age,person[i].address);
        fprintf(myfile," hight: %icm , weight: %ikg\n",person[i].hight,person[i].weight);
        fprintf(myfile," email: %s\n",person[i].email);
        fprintf(myfile,"\n\n\n");
    }
    fclose(myfile);



}
// mood    ...............   delete   .............. create
//  r => read    .........     no     ..............   no
//  w => write   .........     yes    ..............   yes
//  a => append  .........     no     ..............   yes