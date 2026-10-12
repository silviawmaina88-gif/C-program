#include <stdio.h>

int main(){
    //TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float fahreinheit =0.0f;
    float celsius =0.0f;

    printf("TEMPERATURE CONVERSION PROGRAM\n");
    printf("c. celsius to fahreinhei\n");
    printf("f. fahreinheit to celsius\n");
    printf("Is the temp in celsius (c) or fahreinheit(f)?: ");
    scanf("%c",&choice);

    if (choice == 'c'){
        //c to f
        printf("Enter the temperature in celsius: ");
        scanf("%f",&celsius);
        fahreinheit=(celsius * 9/5) + 32 ;
        printf("%.1f celsius is equal to %.1f fahreinheit\n",celsius, fahreinheit);


    }
    else if(choice == 'f'){
        //f to c
         printf("Enter the temperature in fahreinheit: ");
         scanf("%f",&fahreinheit);
         celsius=(fahreinheit -32 ) * 5/9 ;
         printf("%.1f fahreinheit is equal to %.1f celsius\n",fahreinheit, celsius);


    }
    else{
        printf("Invalid choice please select c or f !");
    }

    return 0;
}