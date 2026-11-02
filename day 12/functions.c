#include <stdio.h>


/*void myfunction(){
    printf("i just got excuted!\n");
}
int main(){

    myfunction();
    myfunction();

    return 0;
}*/

void calculatesum(int x,int y){

    int sum=0;
    sum=x + y;
    printf("the sum of %d & %d is:%d\n",x, y,sum);
}

int main(){
    calculatesum(5,8);
    calculatesum(7,9);
    return 0;
}