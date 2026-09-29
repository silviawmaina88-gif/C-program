#include <stdio.h>

int main(){
    //format specifiers=control how data is displayed or read
    //width,precision,flags

    int age =25;
    float price=19.99;
    double pi=3.1456756789;
    char currency='$';
    char name []="thrive with silvia";


    printf("%d \n",age);
    printf("%f \n",price);
    printf("%lf \n",pi);
    printf("%c \n",currency);
    printf("%s \n",name);






    int numb=1;
    int numb2=10;
    int numb3=-100;

    printf("%+d\n",numb);
    printf("%+d\n",numb2);
    printf("%+d\n",numb3);






    float price4 =14.99;
    float price2=9.990;
    float price3=-100.00;

    printf("%+7.2f\n",price4);
    printf("%+7.2f\n",price2);
    printf("%+7.2f\n",price3);






    return 0;
}