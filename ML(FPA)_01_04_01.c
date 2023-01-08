// ML(FPA)_01_03_01

#include <stdio.h>

int main(void)
{
    
    int ersteZahl;
    int zweiteZahl;
        
    printf("Bitte geben Sie eine erste ganze Zahl ein: \n");
    fflush(stdin);
    scanf("%d",&ersteZahl);
    
    printf("Bitte geben Sie eine zweite ganze Zahl ein: \n");
    fflush(stdin);
    scanf("%d",&zweiteZahl);
    
    
    if (ersteZahl >= zweiteZahl)
        {
            printf("Das Maximum aus %d und %d ist: %d\n", ersteZahl,zweiteZahl,ersteZahl);
        }
    else
        {
            printf("Das Maximum aus %d und %d ist: %d\n", ersteZahl,zweiteZahl,zweiteZahl);
        }

    
}
