#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
 
    int prozentsatz; 
    char antwort;

    do
    {
        printf("Geben Sie bitte den Prozentsatz ein: ");
        fflush(stdin);
        scanf("%d",&prozentsatz);

        printf("\n");

        if (prozentsatz <= 100 && prozentsatz >=0)
        {
            if (prozentsatz >= 92 && prozentsatz <=100)
            {
                printf("sehr gut\n");
            }
            if (prozentsatz >= 81 && prozentsatz <92)
            {
                printf("gut\n");
            }
            if (prozentsatz >= 67 && prozentsatz <=80)
            {
                printf("befriedigend\n");
            }
            if (prozentsatz >= 50 && prozentsatz <=66)
            {
                printf("ausreichend\n");
            }
            if (prozentsatz >= 30 && prozentsatz <=49)
            {
                printf("mangelhaft\n");
            }
            if (prozentsatz < 30)
            {
                printf("ungenügend\n");
            }
            
        }
        else
        {
            printf("Keine gültiger Prozentsatz\n");
        }
        
        printf("\nWeiter gehen? (j/n): ");
        printf("\nWeiter gehen? (j/n): ");
        fflush(stdin);
        scanf("%c",&antwort);

        printf("\n");

    } while (antwort == 'j');

    printf("\n");
    
    printf("Ende des Programm\n");
    system("pause");

}