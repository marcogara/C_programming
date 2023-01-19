#include <stdio.h>
#include <windows.h>

float prozentsatz(float, float);           // Signatur oder Prototip einer Funktion der in Hauptprogramm verwendet wird
                                           // P. beinhalten Namen der Funktion, Rückkehrdatentyp, ANzahl und Datentyp der Parameter                        

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    float g,pw,p;

    printf("Geben den Grundwert ein: ");
    fflush(stdin);
    scanf("%d",&g);

    printf("Geben den Prozentwert ein: ");
    fflush(stdin);
    scanf("%d",&pw);

    p = prozentsatz(g,pw);

    printf("Das Prozentsatz ist %.2f %% ",p);

    // kurze form alternativ Zeile 21/23
    // printf("Das Prozentsatz ist %.2f %% ",prozentsatz(g,pw));

    printf("\n\n");
    system("pause");
    return 0;
}

float prozentsatz(float ueberga_g, float uebergabe_pw)

{
    float p = (uebergabe_pw/ueberga_g)*100;
    return p;
}