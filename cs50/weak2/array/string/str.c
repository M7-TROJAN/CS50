#include<stdio.h>
#include<cs50.h>


//اصنع كود ياخذ نص من المستخدم ثم يقوم بعد عدد حروف النص ويقول لك العدد
int main(){
    string text = get_string("text: ");
    int number = 0;
    while(text[number] != '\0'){
        number++;
    }printf("he number of letters is: %i\n",number);

}