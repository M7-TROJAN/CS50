#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char* argv[]){

    int i = 0;
    printf("%p\n",&i);
    int* pi = &i;
    printf("%p\n",pi);
    printf("%i\n",*pi);

    //.........................................................................................
    printf("\n");
    //.........................................................................................

    char* s = "mahmoud";
    printf("%p\n",s);
    printf("%s\n",s);
    printf("%c\n",*s);

    //.........................................................................................
    printf("\n");
    //..........................................................................................

    printf("%p\n",s);  // print adress of s ... hexadesimal num
    printf("%p\n",&s[0]); // print adress of s[0] ... hexadesimal num / >> adress of 'm'
    printf("%p\n",&s[1]); // print adress of s[1] ... hexadesimal num / >> adress of 'a'
    printf("%p\n",&s[2]); // print adress of s[2] ... hexadesimal num / >> adress of 'h'
    printf("%p\n",&s[3]); // print adress of s[3] ... hexadesimal num / >> adress of 'm'
    printf("%p\n",&s[4]); // print adress of s[4] ... hexadesimal num / >> adress of 'o'
    printf("%p\n",&s[5]); // print adress of s[5] ... hexadesimal num / >> adress of 'u'
    printf("%p\n",&s[6]); // print adress of s[6] ... hexadesimal num / >> adress of 'd'
    printf("%p\n",&s[7]); // print adress of s[7] ... hexadesimal num / >> adress of '\0'

    //...........................................................................................
    printf("\n");
    //...........................................................................................

    printf("%c\n",*s); // The value inside the title >> 'm'
    printf("%c\n",*(s+1)); // The value inside the title +1 >> 'a'
    printf("%c\n",*(s+2)); // The value inside the title +2 >> 'h'
    printf("%c\n",*(s+3)); // The value inside the title +3 >> 'm'
    printf("%c\n",*(s+4)); // The value inside the title +4 >> 'o'
    printf("%c\n",*(s+5)); // The value inside the title +5 >> 'u'
    printf("%c\n",*(s+6)); // The value inside the title +6 >> 'd'
    printf("%c\n",*(s+7)); // The value inside the title +7 >> '\0'




}


