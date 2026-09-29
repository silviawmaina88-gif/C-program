#include <stdio.h>

int main(){
    //type the three test scores
    float score1=86.5;
    float score2=73.5;
    float score3=92.5;
    //calculate the average
    float average=(score1 +score2 + score3)/3;

    //print the report card
    printf("---TERM 1 SCORES---\n");

    printf("student one score is %.2f \n",score1);
    printf("student two score is %.2f\n",score2);
    printf("student three score is %.2f\n",score3);
    printf("---------------------\n");
    printf("FINAL AVERAGE: %.2f",average);

    return 0;
}