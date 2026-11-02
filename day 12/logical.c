#include <stdio.h>

int main(){
    /*logical operators=are used to combine or modify boolean expressions
     &&=and e.g x>&&x<10 returns 1 because both statement are true
     ||=or e.g x>3 || x<4 returns 1 if one of the statement is true
     !=not e.g !(x>3&&x<10) reverses the result,returns 0 if the 
     result is 1
    */
   int a=1;
   int b=1;

   printf("%d \n",a && b);
   printf("%d \n",a || b);
   printf("%d", !a);

   return 0;
}