#include <stdio.h>

int main(){
    //switch= is an a=lternative to using many if and else statements
    //its more efficients when working with fixed integer values
    char dayofwork='\0';

    printf("enter a day of the week (m,t,w,r,f,s,u): ");
    scanf("%c",&dayofwork);

    switch (dayofwork)
    {
    case 'm':
        /* code */
        printf("it is monday");
        break;
    
    case 't':
    printf("it is tuesday");
        break;

    case 'w':
    printf("it is wednesday");
        break;

    case 'r':
    printf("it is thursday");
        break;

    case 'f':
    printf("it is friday");
        break;

    case 's':
    printf("it is saturday");
        break;

    case 'u':
    printf("it is sunday");
        break;

    default:
        printf("please only enter a character (m,t,w,r,f,s,u) ");
    }

    return 0;

}