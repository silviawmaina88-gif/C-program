#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isrunning=true;
    char response='\0';

  do{
        printf("you are playing a game\n");
        printf("would you like to continue(y=yes n=no):");
        scanf(" %c",&response);

        if(response != 'y' && response != 'Y'){
            isrunning = false;
        }

    }  while(isrunning);
    printf("you exit the game");
    return 0;
}