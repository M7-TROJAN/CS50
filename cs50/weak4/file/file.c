#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int main(){
    FILE* myfile = fopen("pb.txt","w");
    fprintf(myfile," hello mahmoud \n your phone is 01019060452\n ");
//=>  فكدة الفانكشن دي بتطبع في فايل file هي اختصار لكلمة printf الي قبل امر f
//=>  داخل الاقواس اولا بتكتب اسم الفايل الي هتكتب فيه وبعدين بتعمل فاصلة , وتكتب النص الي انت عاوزه داخل علامتين تنصيص

    fclose(myfile);
// fopen هي اختصار لكلمة فايل كلوز وتستخدم لقفل الملف الي فتحته بفانكشن  fclose

}
// mood    ...............   delete   .............. create
//  r => read    .........     no     ..............   no
//  w => write   .........     yes    ..............   yes
//  a => append  .........     no     ..............   yes