#include <stdio.h>

//int result =0;//global scope (hard to debug)

int add(int x, int y){
    int result=x +y;
    return result;

}
int subtract(int x, int y){//local scope
    int result=x - y;
    return result;

}

int main(){
    /*variable scope=where a variable is recognised and accesible
    variable can share the same name as long as it has different scope{}*/
    int x=4;
    int y=3;
    int result=subtract(x,y);
    printf("%d",result);

    return 0;
}