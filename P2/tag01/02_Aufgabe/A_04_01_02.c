#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
 
    char zeichen1, zeichen2;

        printf("Geben Sie bitte den ersten Zeichen ein: ");
        fflush(stdin);
        scanf("%c",&zeichen1);

        printf("Geben Sie bitte den zweiten Zeichen ein: ");
        fflush(stdin);
        scanf("%c",&zeichen2);

        printf("\n");

        if (zeichen1 == 'Q' && zeichen2 !='Q')
        {
            printf("Fall 1");
        }
        else
        {
            if (zeichen1 != 'Q' && zeichen2 =='Q')
            {
                printf("Fall 2");
            } else
            {
                printf("Fall 3");     
            }
            
        }
        
    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");

}
