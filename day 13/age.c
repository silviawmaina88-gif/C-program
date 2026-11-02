#include <stdio.h>
#include <stdbool.h>

bool ageheck(int age){
    if (age >=18){
        return true;
    }

    else{
        return false;
    }
}
int main(){
    int age=12;

    if (ageheck(age)){
        printf("you may sign up");


    }
    else{
        printf("you must be 18+ to sign up");
    }

    return 0;

}