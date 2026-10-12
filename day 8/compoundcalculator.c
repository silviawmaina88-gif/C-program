#include <stdio.h>
#include <math.h>
int main(){
    //COMPOUND INTEREST CALCULATOR

    double principal=0.0;
    double rate=0.0;
    int years=0;
    int timescompounded=0; //how often does interest accrue
    double total=0.0;
    
    printf("Compound Interest Calculater\n");

    printf("Enter the principle:");
    scanf("%lf",&principal);
    
    printf("Enter the interest rate:");
    scanf("%lf",&rate);
    rate=rate/100;

    printf("Enter the number of years:");
    scanf("%d",&years);

    printf("Enter number of times compunded per year:");
    scanf("%d",&timescompounded);

    total=principal * pow(1 + rate/timescompounded,timescompounded * years);

    printf("after %d years the total will be %.2lf $\n",years ,total);
    


    


    



    

    
    return 0;
}