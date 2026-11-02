#include <stdio.h>
#include <string.h>
int main(){
    /*while loop=continue some code while the condition of the loop remains true
    condition must be true for us to enter the while loop*/
    //int numb=0;
    /*do {
        printf("enter a number greater than zero: ");
        scanf("%d",&numb);
        
    }while(numb <=0);*/

    char name[50]="";

    printf("enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';

    while(strlen(name) ==0 ){
        printf("name canot be empty enter your name: ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';


    }

    printf("Hello %s",name);

    
    return 0;
}