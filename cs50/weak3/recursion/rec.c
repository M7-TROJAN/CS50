#include <stdio.h>
#include <cs50.h>
//اصنع برنامج ياخذ اسم المستخدم ثم عدد ارقام الترحيب ثم يطبع له هالو +اسمه قم باستخدام الريكرجن 
void rec(string name,int num);
int main (void){
    string name = get_string("your name: ");
    int num = get_int("number: ");
    rec(name,num);
}
void rec(string name,int num){
    if(num==0){return;}
    printf("hello %s\n",name);
    rec(name,num-1);

}
