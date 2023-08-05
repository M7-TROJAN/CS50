#include <stdio.h>
#include <cs50.h>
//قم بعمل برنامج يقوم باخذ قيمة السعر من المستخدم ثم ياخذ قيمة الخصم ثم ارجع له انت السعر النهائي بعد الخصم
float dis(float reg , int sale);
int main(){
    float reg = get_float("enter the reg price: ");
    int sale = get_int("enter the value of discount: ");
    float x = dis(reg,sale);
    printf("the price after sale is: %.2f \n" , x);
}

float dis(float reg , int sale){

    return reg *(100-sale)/100 ;
}

