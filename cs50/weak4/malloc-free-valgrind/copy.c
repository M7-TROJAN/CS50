#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char* s = get_string("s: ");
    char *t = malloc(strlen(s)+1); // s عدد البايتس قد عدد حروف المتغير  t حجزت مكان في الذاكرة للمتغير
    if(t == NULL){ //يوقف البرنامج  NULL عملت شرط لو مفيش مكان في الرام والمالوك رجعت
        return 1 ;
    }
    for(int i = 0 ; i < strlen(s)+1 ; i ++){ // وزودت واحد علشان اعمل حساب الباك سلاش زيرو s عملت لووب بتتكرر قد عدد حروف المتغير
        t[i] = s[i]; //  t الي ال s في كل لفة هيعمل كوبي لحرف من ال
    }
    t[0]=toupper(t[0]); // لحرف كابيتال t استخدمت فانكشن تو ابر علشان احول اول حرف في النص الي في المتغير
    printf("%s",s);
    printf("%S",t);
    
    free(t); // عملت تحرير للذاكرة الي كنت حاجزها
}