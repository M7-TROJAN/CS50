
#include<stdio.h>
#include<stdlib.h>
int main(){

    /* قم بعمل اراي بها 6 عناصر وهم 1 2 3 4 5 6  باستخدام فانكشن المالوك
    وقم بعمل ريسايزنج للاراي دي وضيف فيها عنصر سابع وهو رقم 7 باستخدام المالوك برضو
    */

    int *list = malloc(6*sizeof(int));

    if(list == NULL){
        return 1 ;
    }

    *list = 1;
    *(list+1) = 2;
    *(list+2) = 3;
    *(list+3) = 4;
    *(list+4) = 5;
    *(list+5) = 6;

    int *tmp = malloc(7*sizeof(int));

    if(tmp == NULL){
        free(list);
        return 1 ;
    }


    for(int i = 0 ; i < 6 ; i++){
        *(tmp+i) = *(list+i);
    }
    free(list);
    *(tmp+6) = 7;
    list = tmp ;

    for(int i = 0 ; i < 7 ; i ++ ){
        printf("%i ",*(list+i));
    }
    free(list);






}
