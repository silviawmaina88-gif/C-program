#include <stdio.h>

int main(){
    //smart device resource tracker

    //declare variables
    float totalstorage=0.0f;
    float usedstrorage=0.0f;
    float batterydrainagerate=0.0f;
    float freestorage=0.0f;
    float freestoragepercent=0.0f;
    float batteryhoursleft=0.0f;


    printf("The total storage:");
    scanf("%f",&totalstorage);
    printf("The used storage:");
    scanf("%f",&usedstrorage);
    printf("The battery drain per hour:");
    scanf("%f",&batterydrainagerate);

    freestorage=totalstorage - usedstrorage;
    freestoragepercent= (freestorage/totalstorage) * 100.0 ;
    batteryhoursleft= 100.0 / batterydrainagerate;

    printf("=======================SYSTEM DIAGNOSIS REPORT=====================\n");
    printf(" Available storage :%.1f \n ",freestorage); //how do i make it appear at the end of the other line?
    printf(" Storage percent free :%.1f%% \n ",freestoragepercent);
    printf(" Hours of battery left :%.1f \n ",batteryhoursleft);




    return 0;

}