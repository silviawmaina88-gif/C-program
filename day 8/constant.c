#include <stdio.h>
#include <math.h>

int main(){
    double radius=0.0f;
    double area=0.0f;
    double surfacearea=0.0f;
    double volume=0.0f;
    const double PI=3.14239;

    printf("Enter the radius:");
    scanf("%lf",&radius);

    area=PI * pow(radius,2);
    surfacearea= 4 * PI * pow(radius,2);
    volume=(4.0/3.0) * PI * pow(radius,2);

    printf("Area :%.2lf cm \n",area);
    printf("surface area:%.2lf cm \n",surfacearea);
    printf("volume:%.2lf cm \n",volume);

    return 0;

}