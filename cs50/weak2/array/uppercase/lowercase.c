#include<stdio.h>
#include<cs50.h>
#include<string.h>

//uppercase مشروع ال
// اصنع برنامج يقوم بتحويل الاحرف الكبيرة الي احرف صغيرة
int main(){
    string text = get_string("Enter Text: ");
    for(int i = 0 ; i < strlen(text) ; i++){
        if(text[i] >= 'A'&&text[i] <= 'Z'){
            printf("%c",text[i]+ 32);
        }
        else{
            printf("%C",text[i]);
        }
    }printf("\n");

}
