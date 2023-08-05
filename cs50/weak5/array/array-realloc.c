
#include<stdio.h>
#include<stdlib.h>
int main(){

/*             قم بعمل اراي اسمها  بها 6 عناصر وهم 1 2 3 4 5 6  باستخدام فانكشن المالوك

       قم بعمل ريسايزنج للاراي دي باستخدام فانكشن ري الوك وضيف فيها عنصر سابع وهو رقم 7
*/

   int *list = malloc(6*sizeof(int));
   if(list == NULL){
    return 1 ;
   }

   list[0] = 1;
   list[1] = 2;
   list[2] = 3;
   list[3] = 4;
   list[4] = 5;
   list[5] = 6;
   int *tmp = realloc(list,7*sizeof(int));
   if(tmp == NULL){
    free(list);
    return 1 ;
   }

   tmp[6] = 7;
   list = tmp ;


   for(int i = 0 ; i < 7 ; i++){
    printf("%i ",list[i]);
   }
   free(list);







}
