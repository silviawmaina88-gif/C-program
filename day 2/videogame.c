#include <stdio.h>

int main(){
    //set character status
    char classinitial='W'; //W for warrior
    int baseattack=50;
    int weoponbonus=15;
    float criticalhitmultiplier=1.5;

    // do the math
    int totalattack=(baseattack + weoponbonus);
    float maxdamage=(totalattack * criticalhitmultiplier);

    //print the formated character sheeet

    printf("------CHARACTER STAT SHEET-------\n");
    printf("The class of our character :%c \n",classinitial);
    printf("It's base attack :%d\n",baseattack);
    printf("It has a weapon bonus of:%+d\n",weoponbonus);
    printf("----------TOTAL DAMAGE IN WAR------------\n");
    printf("Its Total Attack is:%d\n",totalattack);
    printf("It has maximum critical damge of:%.1f ",maxdamage);


    return 0;


}