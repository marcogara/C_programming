#include <stdio.h>
#include <windows.h>


int main(void)
{
    system("chcp.com 1252");
    system("cls");

        float einzelpreis,gesamtpreis;
        int personen;
        
        printf("Geben Sie bitte den Einzelnpreis pro Ticket ein (in Euro): ",einzelpreis);
        fflush(stdin);
        scanf("%f",&einzelpreis);

        printf("Geben Sie bitte die Anzahl der Personen ein: ",personen);
        fflush(stdin);
        scanf("%d",&personen);

        if (personen>4)
        {
           gesamtpreis=einzelpreis*personen*0.9;
        } else
        {
            gesamtpreis=einzelpreis*personen;
        }

        printf("Gesamtpreis: %.2f",gesamtpreis);
        

        printf("\nProgramm endet nun.");


    printf("\n\n\n");
    system("pause");
}