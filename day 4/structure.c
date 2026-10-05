#include <stdio.h>
#include <string.h>
int main(){
    int age= 0;
    float gpa=0.0f;
    char grade='\0';
    char  name[30]="";

    //&=ampersand=address-of operator
    //it tells c to use the memory address of a variable
    printf("enter your age:");
    scanf("%d",&age);
    printf("Enter your GPA:");
    scanf("%f",&gpa); //do not put the precision in scanf
    printf("enter your grade:");
    scanf(" %c",&grade);//space before percent sign to skip \n in the input buffer
    /*
    input buffer is a temporary storage area entered by the user used to store the
    users data before it is processed by the program*/

    getchar(); //to clear \n in the buffer when using fgets
    printf("Enter your full name:");/*scanf stops reading after space so if its
    thrive with silvia only thrive will be read*/
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1 ]='\0';    

    printf("%s\n",name);
    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%c\n",grade);
    
}