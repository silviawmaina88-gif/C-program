#include <stdio.h>
//without this main function the programm cannot run
int main(){
    char name [50];

    /* one displays
    their name here
    */

    printf("Enter your name: ");

    scanf("%s",name) ;
    
    printf(" Your name is: %s",name);

    return 0;
}
