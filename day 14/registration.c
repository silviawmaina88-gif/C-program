#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char name [50]="";//globall variables
int password=0;
void registeruser(){
    int confrimpassword=0;
    printf("Enter you name: ");
    scanf("%49s",&name);
    printf("Enter your password: " );
    scanf("%d",&password);
    printf("confirm you passwword: ");
    scanf("%d",&confrimpassword);

    while (confrimpassword != password){
        printf("your password is not the same try again: ");
        scanf("%d",&confrimpassword);
    }
    
    
}
bool loginuser(){
    char loginname[50]="";
    int loginpassword=0;
    printf("Enter your username: ");
    scanf("%49s",&loginname);
    printf("Enter your password: ");
    scanf("%d",&loginpassword);

    

    while(strcmp(loginname, name) !=0 || loginpassword != password){
        printf("your details are incorrect please try again: ");
        printf("Enter your username: ");
        scanf("%49s",&loginname);
        printf("Enter your password: ");
        scanf("%d",&loginpassword);


    }
    return true;
}

void showmenu(){
    printf("==========STUDENT  ACCOUNT ==============\n");
    int choice=0;
    printf("1.view my username\n");
    printf("2.change password\n");
    printf("3.logout\n");
    printf("Enter (1,2 or 3)to choose where to go: ");
    scanf("%d",&choice);

    while (choice){
        switch (choice)
        {
        case 1:
            printf("This is your username:%s",name);
            break;

        case 2:
            printf("change you password here:");
            break;

        case 3:
            printf("Goodbye %s see you next time!",name);
            break;    
        
        
        
        default:
            printf("invalid choice choose 1,2 or 3: ");
            scanf("%d",&choice);
            break;
        }
        
    }
    
}
int main(){
    
    return 0;
}