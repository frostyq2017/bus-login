#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

struct user{
    char fullname[50];
    char password[50];
    char email[50];
    char username[50];
};

void takeinput (char ch[50]) {
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;
}

char generateusername (char email[50], char username[50]) {
    for(int i = 0; i <strlen(email); i++){
        if(email[i] == '@') break;
        else username[i] = email[i];
    }
}




int main() {

    int opt;
    struct user user;

    printf("............Welcome to the bus booking and reservation system............\n");
    printf("\n please choose your operation\n");
    printf("\n 1.Login\n");
    printf("\n 2.Exit\n");

    printf("\n\nYour choice: ");
    scanf("%d", &opt);
    fgetc(stdin);


    switch(opt){
        case 1:
            printf("\nEnter your full name:");
            takeinput(user.fullname);
            printf("\nEnter your email:");
            takeinput(user.email);
            printf("\nEnter your password:");
            takeinput(user.password);

            generateusername(user.email,user.username);
            printf("\n Your username is %s", user.username);

        case 2:
                printf("\n Login successful. Proceed with the booking and reservation...\n");
        return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 2.\n");
    }





}
