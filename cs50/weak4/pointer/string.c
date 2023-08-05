#include <stdio.h>
typedef char* string ; // Shorten (char*) to (string) .
int main (){

    char* s = "mah"; // string variable .


    printf("%s\n",s); // print value of s ("mah") .


    printf("%c\n",s[0]); // print value of s[0] ("m") .


    printf("%p\n",s); // print (pointer) adress of s ... hexadesimal num == address of s[0].


    printf("%p\n",&s[0]); // print (pointer) adress of s[0] ... hexadesimal num == adress of s .

    printf("%p\n",&s[1]); // print (pointer) adress of s[1] ... hexadesimal num == adress of s[0] + 1 .

    printf("%p\n",&s[2]); // print (pointer) adress of s[2] ... hexadesimal num == adress of s[1] + 1 .

    printf("%p\n",&s[3]); // print (pointer) adress of s[3] ... hexadesimal num == adress of s[2] + 1 .
}