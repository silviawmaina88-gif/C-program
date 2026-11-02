#include <stdio.h>
int main(){
    //break=break out of a loop,

    for(int i=1; i <= 10; i++){
        
        if(i==4){
            break;
        }

        printf("%d\n",i);

    }

    return 0;
}