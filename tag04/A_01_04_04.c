#include <stdio.h>
#include <windows.h>

/*
Das Programm soll entscheiden, ob ein Prüfling mindestens die Hälfte der maximalen Gesamtpunktzahl erreichte (und die Prüfung bestanden hat) oder ob es weniger Punkte waren (und er durchfiel).
Zu diesem Zweck werden Gesamtpunktzahl und erreichte Punktzahl abgefragt.
Anschließend soll der erreichte Prozentsatz ausgegeben werden, verbunden mit dem entsprechenden Zusatz „bestanden“ (oder „nicht bestanden“).
Daraufhin endet das Programm.
*/

int main(void)
{
    system("chcp.com 1252");
    system("cls");

        float gs,ps,pw;  // Grundsatz, prozentsatz, prozentwert
        
        printf("Geben Sie bitte dei Maximal erreichbare Punktzahl ein: ");
        fflush(stdin);
        scanf("%f",&gs);

        printf("Geben Sie bitte die erreichte Punktzahl ein: ");
        fflush(stdin);
        scanf("%f",&ps);
        printf("\n");

        pw=ps/gs*100;
        gs=gs/2;

        if (pw>gs)
        {
            printf("Sie haben %.f Prozent erreicht und bestanden",pw);
        } 
        else
        {
            printf("Sie haben %.f Prozent erreicht und nicht bestanden",pw);
        }

        printf("\nProgramm endet nun.");

    printf("\n\n\n");
    system("pause");
}
