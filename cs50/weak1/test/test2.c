#include <stdio.h>
#include <cs50.h>

int main(){
  int count ;
  do{
    count = get_int("count: ");
  }while(count<0);

  for(int i = 0 ; i < count ; i++)
  {
    for(int y = 0 ; y < count ; y++){
      printf("#");
   }printf("\n");
  }

}