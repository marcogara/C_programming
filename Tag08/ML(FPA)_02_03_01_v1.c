#include <stdio.h>
#include <windows.h>

// For Schleife Variation 

int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int max;

    printf("Geben Sie bitte das Maximum ein: ");
    fflush(stdin);
    scanf("%d",&max);

    if (max>0)
    {
        for(int i=1;i<=max;i++)
        {
            printf("%d ",i);
        }
        printf("\nProgramm endet nun.");
    }
    else
    {
        printf("\nProgramm endet nun.");
    }

    printf("\n\n\n");
    system("pause");
}
