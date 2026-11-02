#include <stdio.h>

int main(){
    
    int rows=0;
    int columns=0;
    char symbols='\0';

    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&columns);
    printf("Enter a symbol to use : ");
    scanf(" %c",&symbols);
    printf("\n");
    
    for(int i=0; i < rows; i++){
        for(int j=0; j <columns;j++){
            printf("%c",symbols);

        }
      printf("\n");
    }



    return 0;
}