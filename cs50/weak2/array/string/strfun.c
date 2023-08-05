#include<stdio.h>
#include<cs50.h>


//اصنع كود ياخذ نص من المستخدم ثم يقةم بعد عدد حروف النص ويقول لكل العدد
//استخدم مكتبة فانكشن من صنعك
int count(string text);
int main(){
    string text = get_string("text: ");
    int number_of_letters = count(text);
    printf("the number of letters is: %i\n",number_of_letters);
}

int count(string text){
    int i = 0;
    while(text[i] != '\0'){
        i++;
    }return i;
}
