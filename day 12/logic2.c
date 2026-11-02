#include <stdio.h>
#include <stdbool.h>

int main(){
    int temp =100000;

    /*if(temp > 0 && temp <30){ //both conditions have to be true
        printf("The temperature is good");

    }*/
    /*if(temp <= 0 || temp >=30){ //atleast one of the conditions need to be true
        printf("The temperature is bad");

    }

    
    else{
        printf("The temperature is good");
    }*/

    bool issunny = true;

    if(!issunny){// IT DOES THE OPPOSITE
        printf("it is CLOUDY outside");

    }
    else{
        printf("it is SUNNY outside");

    }

    return 0;
}