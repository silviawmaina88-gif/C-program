#include <stdio.h>
#include <stdbool.h>

//server security access controller
bool verifyaccess(int clearancelevel){
    
     return clearancelevel==3;
    
    
}

bool proceedverifying( int isschoolnetwork, int hasguestbypass){
    return isschoolnetwork==1 && hasguestbypass==1;
        
}

int main(){
    int clearancelevel=0;
    int isschoolnetwork=0;
    int hasguestbypass=0;
    

    printf("Enter your clearance level  (1,2 or 3): ");
    scanf("%d",&clearancelevel);
    printf("Are you on school network? Enter 1 or 0: ");
    scanf("%d",&isschoolnetwork);
    printf("Do you have a guest bypass code? Enter 1 or 0: ");
    scanf("%d",&hasguestbypass);

bool clearance = verifyaccess(clearancelevel);
bool network = proceedverifying(isschoolnetwork, hasguestbypass);

printf("Clearance check: %d\n", clearance);
printf("Network check: %d\n", network);

bool accessresult = clearance && network;

printf("Final result: %d\n", accessresult);

    return 0;
}