#include<stdio.h>
#include<cs50.h>
#include<string.h>

//اصنع كود ياخذ نص من المستخدم ثم يقةم بعد عدد حروف النص ويقول لكل العدد
//string.h استخدم مكتبة
int main(){
    string text = get_string("text: ");
    int number_of_text = strlen(text) ;
    printf("the number of letters is: %i\n",number_of_text);
}