#include <stdio.h>
#include <windows.h>

// do-While variation 

int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int max;
    int i = 1;

    printf("Geben Sie bitte das Maximum ein: ");
    fflush(stdin);
    scanf("%d",&max);

    if (max>0)
    {
        do
        {
            printf("%d ",i);
            i++;

        } while (i<=max);

        printf("\nProgramm endet nun.");
        
    }
    else
    {
        printf("\nProgramm endet nun.");
    }

    printf("\n\n\n");
    system("pause");
}
