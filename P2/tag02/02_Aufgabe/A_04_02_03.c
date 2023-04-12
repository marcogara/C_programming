#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
 
    int a,b,c,summe,treffer;

    srand(time(NULL));
    rand();

    for(int i=0;i<5;i++)
    {
        a=rand()%10+1;
        b=rand()%10+1;
        c=rand()%10+1;
        printf("a = %d\n",a);
        printf("b = %d\n",b);
        printf("c = %d\n",c);
        
        printf("Geben Sie bitte die Summe ein: ");
        fflush(stdin);
        scanf("%d",&summe);

        if (summe==a+b+c)
        {
            treffer++;
            continue;
        }
        
    }
    if (treffer>3)
    {
        printf("Sehr gut, Sie haben %d Mal richtig berechnet.",treffer);
    } else
    {
        printf("aiaaiai, Sie haben nur %d Mal richtig berechnet.",treffer);
    }
    
    printf("Sie haben %d Mal richtig berechnet.",treffer);

    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}
