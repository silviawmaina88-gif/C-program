//weekly paycheck calculator
# include <stdio.h>

int main(){
    //declare variables
    float hoursworked;
    float hourlypayrate;
    float taxrate=0.15;

    //input added by the user

    printf("Enter hours worked :");
    scanf("%f",&hoursworked);
    printf("Enter hourly pay rate :");
    scanf("%f",&hourlypayrate);

     //do math

    float grosspay= hoursworked * hourlypayrate;
    float Totaltax=grosspay * taxrate;
    float netpay=grosspay - Totaltax;
    // diplay the final output

    printf("-----------------------WEEKLY PAYCHECK------------------\n");
    printf("Total grosspay : %7.2f\n",grosspay);
    printf("Total tax ammount deducted :%7.2f\n ",Totaltax);
    printf("Net pay : %7.2f\n",netpay);

    return 0;
}