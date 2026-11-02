#include <stdio.h>



double cube(double numb){
    return numb * numb * numb;
}
double square(double numb){
    //int result =numb * numb;

    return numb * numb;

}
int main(){
    //return=it will return a value back to where you call a function
    double x=cube(2);
    double y=cube(3);
    double z=cube(4);

    printf("%lf\n",x);
    printf("%lf\n",y);
    printf("%lf",z);
    return 0;
}