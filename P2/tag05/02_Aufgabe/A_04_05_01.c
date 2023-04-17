#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

global=1;

void erhoeheUmX(int x)
{
    global=global+x;
}

int output()

{
    printf("d%,global");
}

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
    int x;

    printf("ganze Zahl bitte: ");
    fflush(stdin);
    scanf("%d",&x);

    erhoeheUmX(x);


    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}
