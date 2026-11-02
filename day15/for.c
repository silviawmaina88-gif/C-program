#include <stdio.h>
#include <windows.h>

int main(){
    /*for loop=repeat code in limited amount of times
    for(initialize;condition; update)*/
    for(int i = 10; i >=0 ; i --){
        Sleep(1000);
        printf("%d\n",i);

    }
    printf("happy new year");

    return 0;
}