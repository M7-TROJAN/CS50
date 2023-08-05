#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void swap(int* a , int* b);
int main(){

    int x = 2;
    printf("%p\n",&x);
    int *px = &x;
    printf("%p\n",px);
    printf("%i\n",*px);
    printf("%i\n",*&x);

    char* s = "mahmoud";

    printf("%p\n",s);
    printf("%s\n",s);
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));
    printf("%c\n",*(s+3));
    printf("%c\n",*(s+4));
    printf("%c\n",*(s+5));
    printf("%c\n",*(s+6));


    int f [] = {4,5,6,3,2,1,8,9,0,7,300,700,900,40014};

    printf("%i\n",*f);
    printf("%i\n",*(f+1));
    printf("%i\n",*(f+2));
    printf("%i\n",*(f+3));
    printf("%i\n",*(f+4));
    printf("%i\n",*(f+5));
    printf("%i\n",*(f+6));
    printf("%i\n",*(f+7));
    printf("%i\n",*(f+8));
    printf("%i\n",*(f+9));
    printf("%i\n",*(f+10));
    printf("%i\n",*(f+11));
    printf("%i\n",*(f+12));
    printf("%i\n",*(f+13));
    printf("%i\n",*(f+14));
    printf("%i\n",*(f+15));
    printf("%i\n",*(f+16));
    printf("%i\n",*(f+17));


    int r = get_int("r: ");
    int w = get_int("w: ");
    if(r==w){
        printf("same\n");
    }
    else{
        printf("diffrent\n");
    }

    char* q = get_string("q: ");
    char* v = get_string("v: ");
    if(strcmp(q,v)==0){
        printf("same\n");
    }
    else{
        printf("not same\n");
    }


    char * m = get_string("m: ");
    char *h = malloc(strlen(m)+1);
    if(h    ==  NULL){
        return 1 ;
    }
    for(int i = 0 ; i < strlen(m)+1 ; i++ ){
        h[i] = m[i];
        h[i] = toupper(h[i]);
    }

    printf("m: %s\n",m);
    printf("h: %s\n",h);

    free(h);

    int  k = 2 ;
    int  j = 1 ;
    swap(&k,&j);

    printf("k: %i\n",k);
    printf("j: %i\n",j);





}

void swap(int* a , int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}