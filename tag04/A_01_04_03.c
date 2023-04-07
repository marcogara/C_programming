#include <stdio.h>
#include <windows.h>

int main(void)
{
    system("chcp.com 1252");
    system("cls");

        int wahl;
        char b1,b2;
        
        printf("Geben Sie bitte einen ersten Buchstabe ein: ");
        fflush(stdin);
        scanf("%c",&b1);

        printf("Geben Sie bitte einen zweiten Buchstabe ein: ");
        fflush(stdin);
        scanf("%c",&b2);
        printf("\n");

        printf("Wählen Sie bitte aus ....\n");
        printf("(1) für Ausgabe nebeneinander\n");
        printf("(2) für Ausgabe übereinander\n");

        printf("Ihre Auswahl: ");
        fflush(stdin);
        scanf("%d",&wahl);

        printf("\n");

        printf("Ausgabe:\n");

        if (wahl==1)
        {
            printf("%c%c",b1,b2);
        } 
        if (wahl==2)
        {
            printf("%c\n%c",b1,b2);
        }

        printf("\nProgramm endet nun.");


    printf("\n\n\n");
    system("pause");
}