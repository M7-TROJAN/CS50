#include <stdio.h>
#include <cs50.h>
float discount(float reg , int sale);
int main(){

  float reg = get_float("enter the price \n");
  int sale = get_int("enter tha value of discount\n");
  float last_price = discount(reg , sale);
  printf("the price after sale = %.2f \n",last_price);


}
float discount(float reg , int sale){
  float x = reg * (100-sale)/100;
  return x ;
}

