#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

// demostration of use pointer reference and dereference in the function rechne 

void rechne(int a,int b,int* arr)
{
    arr[0]=a+b;
    arr[1]=a-b;
    arr[2]=a*b;
    arr[3]=a/b;
}

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");

    int a,b;
    int arr[4];

    printf("Geben sie ein Zahl ein: a = ");
    fflush(stdin);
    scanf("%d",&a);

    printf("Geben sie ein Zahl ein: b = ");
    fflush(stdin);
    scanf("%d",&b);

    rechne(a,b,&arr[0]);        // the function parameter is 2 values a, b and a pointer for the position in memory of the array arr

    for (int i = 0; i < 4; i++)
    {
    printf("Arr val. %d ist : %d\n",i+1,arr[i]);
        
    }
    
    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}