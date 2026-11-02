#include <stdio.h>
#include <stdbool.h>

void hello(char name[],int age);//function prototype
bool agecheck(int age);
int main(){
    /*function prototype=is a statement listed before the main function*/
    hello("silvia",3);

    if (agecheck(3)){
        printf("you are eligible to register as a voter\n");
    }
    else{
        printf("you must be 18+ to be eligible to vote");
    }
    return 0;
}
void hello(char name[],int age){
    printf("hello %s\n",name);
    printf("you are %d years old\n",age);

}

bool agecheck(int age){
     if (age>=18){
        return true;
     }
     else{
        return false;
     }  
}
