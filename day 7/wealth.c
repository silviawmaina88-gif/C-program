#include <stdio.h>
#include <math.h>
//compund interest wealth estimator
int main(){
    double principal=0.0f; //starting money
    double  rate=0.0f;  //interest rate
    double years=0.0f; 
    double futurewealth=0.0f;
    double interestearned=0.0f;

    printf("Enter your starting investment amount: ");
    scanf("%lf",&principal);
    printf("Enter the annual interest rate: ");
    scanf("%lf",&rate);
    printf("Enter the number of years to invest:");
    scanf("%lf",&years);

    futurewealth=principal * pow(1 + rate,years);

    interestearned= futurewealth - principal;

    printf("===============COMPOUND INTEREST GROWTH STATEMENT=============\n");
    printf("The total amount compounded:$%.2f\n",futurewealth);
    printf("The total ineterest earned:$%.2f",interestearned);


    return 0;
}