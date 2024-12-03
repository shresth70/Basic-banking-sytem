#include <stdio.h> // Use lowercase for standard header files

int main() {
    float balance = 0, amount;
    int choice;

    do {
        printf("\nBASIC BANKING SYSTEM------>\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance = balance + amount;
                    printf("Successfully Deposited\n");
                    printf("New balance: %.2f\n", balance);
                } else {
                    printf("Error! Please enter a valid input\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance) {
                    balance = balance - amount;
                    printf("Successfully withdrew\n");
                    printf("Available balance: %.2f\n", balance);
                } else if (amount > balance) {
                    printf("Insufficient Balance!\n");
                } else {
                    printf("Invalid input! Please enter a positive value\n");
                }
                break;

            case 4:
                printf("Thank you for using the banking system. Bye!\n");
                break;

            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
