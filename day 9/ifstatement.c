#include <stdio.h>
int main(){
    //if statements=do if statements is true ,dont do it if statement is false
    int age =0;

    printf("Enter your age:");
    scanf("%d",&age);

    if(age >=65){
        printf("you are a senior");

    }
    else if (age>=18){
        printf("you are an adult");
    }
    else if(age < 0){
        printf("you havent been born yet");

    }
    
    else if(age == 0){
        printf("you are a newborn");

    }
    else{
        
        printf("you are a child");
    }

    return 0;
}