#include <stdio.h>
#include <cs50.h>
//average برنامج يقوم باخذ كمية او عدد الارقام من المستخدم ثم ياخذ قيمة الارقام ثم يقوم بطباعة متوسط الارقام


int main(){
    int length=get_int("enter number of digits: ");
    int number[length];
    int x = 1;
    int result = 0;
    for(int i = 0 ; i <length ; i++){
        number[i]=get_int("number%i: ",x);
        x++;
        result += number[i];


    }printf("the average is: %.2f\n",result/(float)length);

}