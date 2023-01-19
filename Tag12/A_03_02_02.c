#include <stdio.h>
#include <windows.h>

float potenzRechnen(float, int);           // Signatur oder Prototip einer Funktion der in Hauptprogramm verwendet wird
                                           // P. beinhalten Namen der Funktion, Rückkehrdatentyp, ANzahl und Datentyp der Parameter                        

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    float x,p;
    int n;

    printf("Geben Sie eine kommazahl ein: ");
    fflush(stdin);
    scanf("%f",&x);

    printf("Geben Sie einen Ganzezahl ein: ");
    fflush(stdin);
    scanf("%d",&n);

    p = potenzRechnen(x,n);

    printf("Das Ergebnis von %f hoch %d ist:  %.f ",x,n,p);

    printf("\n\n");
    system("pause");
    return 0;
}

float potenzRechnen(float uebergabe_x, int uebergabe_n)

{
    float p = 1;
    for (int i = 0; i < uebergabe_n; i++)
    {
        p = p * uebergabe_x; 
    }
    
    return p;
}