#include <stdio.h>
#include <windows.h>

int main(void)
{
    system("chcp.com 1252");
    system("cls");

    float monthlyBudget;
    printf("Welcome to the Barebone Budgeting App!\n");

    // Input the monthly budget
    printf("Enter your monthly budget: ");
    scanf("%f", &monthlyBudget);

    // Open the file for storing expenses
    FILE *expenseFile = fopen("expenses.txt", "w");
    if (expenseFile == NULL) {
        printf("Error opening the file for expenses.\n");
        return 1;
    }

    float totalExpenses = 0.0;
    char response;

    // Input expenses and write to file
    do {
        float expense;
        printf("Enter an expense: ");
        scanf("%f", &expense);
        totalExpenses += expense;
        fprintf(expenseFile, "%.2f\n", expense);

        printf("Do you want to enter another expense? (y/n): ");
        scanf(" %c", &response);
    } while (response == 'y' || response == 'Y');

    // Close the expense file
    fclose(expenseFile);

    // Calculate remaining budget
    float remainingBudget = monthlyBudget - totalExpenses;

    // Display the results
    printf("\n=== Budget Summary ===\n");
    printf("Monthly Budget: $%.2f\n", monthlyBudget);
    printf("Total Expenses: $%.2f\n", totalExpenses);
    printf("Remaining Budget: $%.2f\n", remainingBudget);

        printf("\nProgramm end");

    printf("\n\n\n");
    system("pause");
}