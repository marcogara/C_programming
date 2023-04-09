#include <stdio.h>
#include <windows.h>

// While variation 

int main(void)
{
    system("chcp.com 1252");
    system("cls");

    int max;
    int i = 1;

    printf("Geben Sie bitte das Maximum ein: ");
    fflush(stdin);
    scanf("%d",&max);

    while (max > 0 && i <= max)
    {
        printf("%d ",i);
        i++;
    }
    
    printf("\nProgramm endet nun.");
        
    printf("\n\n\n");
    system("pause");
}
