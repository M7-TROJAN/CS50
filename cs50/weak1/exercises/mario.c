#include <stdio.h>
#include <cs50.h>
// اصنع برنامج ياخذ عدد من المستخدم ويقوم بطباعة علامةالشباك بعدد المرات الذي ادخلهم المستخدم صفوف واعمدة
int main(){
    int count ;
    do{
        count = get_int("count: ");
    }while(count<1);
    for(int i = 0 ; i<count ; i++){
        for(int y = 0 ; y<count ; y++){
            printf("#");
        }printf("\n");
    }


}
