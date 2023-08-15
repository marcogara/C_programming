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

    float totalExpenses = 0.0;
    int numExpenses;

    // Input the number of expenses
    printf("Enter the number of expenses: ");
    scanf("%d", &numExpenses);

    // Input individual expenses
    for (int i = 1; i <= numExpenses; ++i) {
        float expense;
        printf("Enter expense %d: ", i);
        scanf("%f", &expense);
        totalExpenses += expense;
    }

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