#include <stdio.h>
#include <windows.h>

int sucheMin(int, int);     // Signatur oder Prototip einer Funktion der in Hauptprogramm verwendet wird
                            // P. beinhalten Namen der Funktion, Rückkehrdatentyp, ANzahl und Datentyp der Parameter                        

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    int x,y,min;

    printf("Geben erste Zahl ein: ");
    fflush(stdin);
    scanf("%d",&x);

    printf("Geben zweite Zahl ein: ");
    fflush(stdin);
    scanf("%d",&y);

    min = sucheMin(x,y);

    printf("Das Minimum aud %d und %d ist %d",x,y,min);

    printf("\n\n");
    system("pause");
    return 0;
}

int sucheMin(int ueberga_x, int uebergabe_y)

{
    if (ueberga_x <= uebergabe_y)
    {
        return ueberga_x;
    }
    else
    {
        return uebergabe_y;
    }

    // funktioniert auch 

    // int sucheMin(int x,inty)
    // {
    // return (x<y)? x:y;

    //}
}