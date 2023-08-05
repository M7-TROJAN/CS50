#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int main(){
    int x = 2 ;
    int y = 1 ;

    //  بين قيم المتغيرين swap المطلوب عمل تبديل 

    int temp = x ; // x اولا عمل متغير مساعد وجعلته يمتلق قيمة ال
    x = y ; // y اتمتلك قيمة x ثانيا خليت ال
    y = temp ; //  temp تمتلك قيمة  y خليت ال
    printf("x: %d\n",x);
    printf("y: %d\n",y);





}
