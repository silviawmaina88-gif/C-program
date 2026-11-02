#include <stdio.h>

int main(){

    char grade='\0';

    printf("Enter your grade: ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
    printf("you did great!");
        /* code */
        break;

    case 'B':
    printf("you did alright!");
        /* code */
        break;

    case 'C':
    printf("you did poorly !");
        /* code */
        break;

    case 'D':
    printf("you failed!");
        /* code */
        break;
    
    default:
    printf("invalid grade enter A, B, C or D");
        break;
    }
    return 0;
}