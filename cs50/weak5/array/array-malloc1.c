#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
typedef struct phonebook{
    char first_name[20];
    char last_name[20];
    char phone[15];
}pb;
int main(){

  int *list = malloc(6*sizeof(int));
  int *tmp = malloc(7*sizeof(int));
  if(list == NULL || tmp == NULL){
    return 1;
  }
  for(int i = 0 ; i < 6 ; i++){
    printf("number%i: ",i+1);
    scanf("%d",&list[i]);
    tmp[i] = list[i];
    if(i == 5 ){
      tmp[i+1] = tmp[i]+1;
      free(list);
      list = tmp;
      for(int j = 0 ; j < 7 ; j++ ){
        printf("%i\n",list[j]);
      }

    }
  }
  free(list);





}
