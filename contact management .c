#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

int main() {
	int i,j;
    struct Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== CONTACT BOOK =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        // Add Contact
        if (choice == 1) {
            if (count >= MAX_CONTACTS) {
                printf("Contact book is full!\n");
                continue;
            }

            printf("Enter name: ");
            fgets(contacts[count].name, 50, stdin);
            contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';

            printf("Enter phone number: ");
            fgets(contacts[count].phone, 20, stdin);
            contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';

            printf("Enter email: ");
            fgets(contacts[count].email, 50, stdin);
            contacts[count].email[strcspn(contacts[count].email, "\n")] = '\0';

            count++;

            printf("Contact added successfully!\n");
        }

        // View Contacts
        else if (choice == 2) {
            if (count == 0) {
                printf("No contacts found.\n");
            }
            else {
                printf("\n===== ALL CONTACTS =====\n");

                for (i = 0; i < count; i++) {
                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", contacts[i].name);
                    printf("Phone : %s\n", contacts[i].phone);
                    printf("Email : %s\n", contacts[i].email);
                }
            }
        }

        // Search Contact
        else if (choice == 3) {
            char searchName[50];
            int found = 0;

            printf("Enter name to search: ");
            fgets(searchName, 50, stdin);
            searchName[strcspn(searchName, "\n")] = '\0';

            for ( i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("\nContact found!\n");
                    printf("Name  : %s\n", contacts[i].name);
                    printf("Phone : %s\n", contacts[i].phone);
                    printf("Email : %s\n", contacts[i].email);

                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Contact not found.\n");
            }
        }

        // Delete Contact
        else if (choice == 4) {
            char deleteName[50];
            int found = 0;

            printf("Enter name to delete: ");
            fgets(deleteName, 50, stdin);
            deleteName[strcspn(deleteName, "\n")] = '\0';

            for (i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, deleteName) == 0) {

                    for ( j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }

                    count--;
                    found = 1;

                    printf("Contact deleted successfully!\n");
                    break;
                }
            }

            if (!found) {
                printf("Contact not found.\n");
            }
        }

        // Exit
        else if (choice == 5) {
            printf("Thank you for using Contact Book!\n");
            break;
        }

        else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
