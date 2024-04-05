
#include "functions.h"
#include <stdio.h>

int main() {
  struct Node *head;
  initialize_list(&head);

  read_accounts_from_file(&head, "accounts.txt");
  read_transactions_from_file(&head, "transactions.txt");

  int choice;
  do {
    printf("███████ ███████ ██       ██████   █████  ███    ██ ██   ██\n");
    printf("██      ██      ██       ██   ██ ██   ██ ████   ██ ██  ██\n");
    printf("█████   ███████ ██ █████ ██████  ███████ ██ ██  ██ █████\n");
    printf("██           ██ ██       ██   ██ ██   ██ ██  ██ ██ ██  ██\n");
    printf("███████ ███████ ██       ██████  ██   ██ ██   ████ ██   ██\n");
    printf("Made with good hands By BELARBI ANES ABDELMALEK & NEKHOUL MOHAMMED "
           "ASSIL");
    printf("\n+---------------------------------------------+\n");
    printf("|                  Main Menu                   |\n");
    printf("+---------------------------------------------+\n");
    printf("| 1. Admin Menu                               |\n");
    printf("| 2. Customer Menu                            |\n");
    printf("| 3. Exit                                     |\n");
    printf("+---------------------------------------------+\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      admin_menu(&head);
      break;
    case 2:
      customer_menu(head);
      break;
    case 3:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice! Please try again.\n");
    }
  } while (choice != 3);

  free_list(&head);

  return 0;
}
