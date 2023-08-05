#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//linear search يوجد لديك اراي من نوع اينت فيها 7 ايندكس وهم 4و2و6ز8و7و0 اسال المستخدم عن ماذا يريد ان يبحث وقم ب استخدام خوارزمية

int main (int argc,string argv[]){
    int numbers[] = {4,6,8,2,7,5,0};
    int search = get_int("search for? ");
    for(int i = 0 ; i < 7 ; i++){
        if(numbers[i] == search){
            printf("found in %i steps\n",i+1);
            return 0 ;
        }

    }
    printf("ERROR not found\n");
     return 1 ;


}
//.........................................................................................................................

#include "stdio.h"
#include "cs50.h"
#include "string.h"
int main (int argc , string argv[]){
  if(argc != 2){
    printf("error you don't have acsses\n");
    return 1 ;
    }
  printf("hello %s\n",argv[1]);
   int numbers[] ={10,20,4,7,3,1,90,100,500,8,22,34};
   int search = get_int("search for:");
   for(int i = 0 ; i < 12 ; i++){
    if(numbers[i]== search){
      printf("found in %i steps\n",i+1);
      return 0;
     }
   }
   printf("not found\n");
   return 1 ;

}