#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int x;

void zufall() 
{

    x=rand()%10+1;
 
}


int main(void)
{
    srand(time(NULL));
    rand();
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");

    for (int i = 0; i < 5; i++)
    {
        zufall();

        printf("%d\n",x);
        // x=0;
        
    }
    



    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}
