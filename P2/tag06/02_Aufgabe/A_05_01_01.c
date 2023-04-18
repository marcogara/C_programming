#include <stdio.h>
#include <windows.h>

// the function thake as parameter an array of char pointer "text" and a integer pointer of X 

void inputINT(char* text,int* p)
{
    printf("%s",&text[0]);   // dereference the pointer of the array text 
    fflush(stdin);
    scanf("%d",p);      // the values given by the user will be in memory of the pointer saved 
}

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");

    int x;

    inputINT("Geben Sie bitte eine ganze Zahl ein: ",&x);
    printf("\nKontrollausgabe: x hat nun den Wert: %d",x);

    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}