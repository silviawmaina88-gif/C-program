#include <stdio.h>

void happybirthday(char name[],int age){//parameters
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s",name);
    printf("\nHappy birthday to you!\n");
    printf("you are %d years old \n",age);

}
int main(){
    //functons=is a reusable bock of code that runs only when called
    //arguments can be set to a function sothat it can use them

    char name[]="silvia";
    int age=25;

    happybirthday(name, age);//arguments
    
    return 0;
}