#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//اصنع برنامج يشتغل لو بعتلو قيمتين ويرحب بيك ويطلع ايرور لو بعتله قيمة واحدة
int main (int argc,string argv[]){
    if(argc != 2 && strcmp(argv[1],"m7")!= 0){
        printf("ERORE , sorry You do not have access.\n");
        return 1 ;
    }
    printf("hello %s\n",argv[1]);
    return 0;


}


/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc , char* argv[]){
    if(argc != 2){
        printf("no\n");
        return 1 ;

    }
    int x = strcmp(argv[1],"mahmoud");
    if(x != 0){
        printf("no\n");
        return 1 ;

        }

    printf("hello , %s\n",argv[1]);


}
*/