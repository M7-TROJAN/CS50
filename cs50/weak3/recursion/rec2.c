#include <stdio.h>
#include <cs50.h>
//اصنع برنامج ياخذ رقم من المستخدم ثم قم بطباعة الرقم علي شكل هرم باستخدام فانكشن
void drow(int n);
int main (void){
    int hight = get_int("hight: ");
    drow(hight);

}
void drow(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int x = 0 ; x<i+1 ; x++){
            printf("#");
        }printf("\n");
    }
}
