#include <stdio.h>
#include <stdbool.h>

int main(){
    /*a variable is a placeholder that stores value that is subject to change e.g hair=minitwist,cocotwist,knotless.
    it is also a reusable container for a value
    it behaves as if it were the value it contains
    */

    int age = 25;
    // %d is a format specifier for int
    printf("you are %d years old \n",age);

    float height= 2.5;
    // its a single precision decimal number
    //%f is a format specifier for float
    printf("you are %.1f tall \n" ,height);

    double price= 2500.567;
    //its a double precision decimal number or more precise
    //%1f is a format specifier for double
    printf("you bag is ksh %lf \n",price);

    char grade ='A';
    char food []="pizza";
    // %s is a format for string char[]
    /*char[]=array of character
    char=single character
    */
    char email []="silvia@gmail.com";
    //%c is a format specifier for char
    printf("you have an %c in math \n",grade);
    printf("i love %s so much \n",food);
    printf("your email is %s",email);

    bool isonline =1;
    //bool =true or false requires <stdbool.h>

    printf("%d",isonline);







    return 0;
}