#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addUser()
{
    char command [50] = "sudo adduser ", name [50];
    printf("Enter user Name : ");
    scanf("%s",name);
    strcat(command , name);
    system(command);
}

void removeGroup()
{
    char command[50] = "sudo groupdel ",group[20];
    printf("Enter Group Name : ");
    scanf("%s",group);
    strcat(command , group);
    system(command);
}
void assignUserToGroup()
{
    char a[50];
    char b[50];
    char command[150] = "sudo usermod -a -G " ;

    printf("Please, Enter group name : ");
    scanf("%s",a);
    printf("Please, Enter user name : ");
    scanf("%s",b);

    // sudo usermod -a -G a b
    strcat(command,a);
    strcat(command," ");
    strcat(command,b);

    system(command);
}
void addGroup()
{
    char groupName[50];
    char command[150] = "sudo groupadd ";

    printf("Enter the new GroupName that you want to create :  ");
    scanf("%s",groupName);
    strcat(command, groupName);
    system(command);
}
void deleteUser()
{
    char command[150] = "sudo userdel ";
    char userName[50];
    printf("Enter the new UserName that you want to delete :  ") ;
    scanf("%s",userName);
    strcat(command, userName);
    system(command);
}
void changePW(){
    char UN[50];
    char NPW[50];
    char command[150] = "sudo passwd ";
    printf("Enter your User name: ");
    scanf("%s",UN);
    strcat(command,UN);
    system(command);
}
void changeUN(){
    char UN[50];
    char newUN[50];
    char command[150] = "sudo usermod -1 ";
    printf("Enter your user name: ");
    scanf("%s",UN);
    printf("Enter your new user name: ");
    scanf("%s",newUN);
    strcat(command,newUN);
    strcat(command," ");
    strcat(command,UN);
    system(command);
}

int main()
{
    int ch;
    while(1){
        printf("\n\n\n\t$ \t           Main Menu                         $\n\t_|__________________________________________________|_\n");
        printf("\t |\t                                            |\n");
        printf("\t |\t1. Add User.                                |\n");
        printf("\t |\t2. Delete User.                             |\n");
        printf("\t |\t3. Add Group.                               |\n");
        printf("\t |\t4. Delete Group.                            |\n");
        printf("\t |\t5. Change information of users.             |\n");
        printf("\t |\t6. Change account information.              |\n");
        printf("\t |\t7. Assign specific users to specific groups.|\n");
        printf("\t |\t8. Clean Screen.                            |\n");
        printf("\t |\t0: to Exit                                  |\n");
        printf("\t_|__________________________________________________|_\n");
        printf("\t$|\t                                            |$\n");
        printf("\n\tYour Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            addUser();
            break;
        case 2:
	    deleteUser();
            break;
        case 3:
	    addGroup();
            break;
        case 4:
            removeGroup();
            break;
        case 5:
	    changeUN();
	    changePW();
            break;
        case 6:
            break;
        case 7:
	    assignUserToGroup();
            break;
        case 8:
            system("clear");
            break;
        case 0:
            exit(0);
            break;
        default :
            break;
        }
    }
}

