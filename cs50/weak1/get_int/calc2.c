#include <stdio.h>
#include <cs50.h>



int main(void){

  printf("welcome, to the calculator . \n");

  long num1 = get_long("enter first num \n");
  long num2 = get_long("enter second num \n");
  char op = get_char("what is the operation do you want \n");


  if (op == '+'){
    printf("result is , %ld \n" , num1 + num2 );
  }
  else if (op == '-'){
   printf("result is , %ld \n" , num1 - num2);


    }
  else if(op == '*' || op == 'x'){
    printf("result is , %ld \n" , num1 * num2);

    }

  else if (op == '/'){
    printf("result is, %ld \n" , num1 /
      num2);


    }
  else {
    printf("sorry i don't understand %c \n" , op );

  }

  printf("bey\n");


}