#include <stdio.h>

int main(){
    //calculator program

    char operator='\0';
    double num1=0.0;
    double num2=0.0;
    double results=0.0;

    printf("Enter the first number: ");
    scanf(" %lf",&num1);

    printf("Enter the operator (+, -, /, *): \n");
    scanf(" %c",&operator);/*
    put space before %c to make scan f ignore leading white space
    if you dont scanf reads the leftover newline character(\n) from the previous input*/
    
    printf("Enter the second number: ");
    scanf("%lf",&num2);

    switch (operator)
    {
        case '+':
            results= num1 + num2;
            break;

        case '-':
            results= num1 - num2;
            break;

        case '/':
            if(num2==0){
                printf("you cant divide by zero\n");
            }
            else{
                results=num1 / num2;
            }
            break;

        case '*':
            results= num1 * num2;
            break;
            
        
        default:
        printf("invalid operator\n");
            break;
    }

    printf("Result:  %4.2lf",results);

    return 0;
}