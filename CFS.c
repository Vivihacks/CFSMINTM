#include <stdio.h>

int main() {
    printf("Welcome to CFS Exploits\n\n");

    while (1) {
        printf("1. ARP Poison\n");
        printf("Choose Target IP:\n");
        char targetIP[16];
        scanf("%s", targetIP);

        printf("Enter Target Port:\n");
        int targetPort;
        scanf("%d", &targetPort);

        printf("Connection established with %s:%d. What do you want to do?\n", targetIP, targetPort);

        int choice;
        printf("1. Grab Cookies\n");
        printf("2. Steal Files\n");
        printf("3. Kill\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Gathering cookies from Target...\n");
                printf("Cookies collected\n\n");
                break;
            case 2:
                printf("Files are being copied and locked on device\n\n");
                break;
            case 3:
                printf("Nulling them\n\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }

    return 0;
}

