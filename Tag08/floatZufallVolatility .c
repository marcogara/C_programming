    // Nice example of bad code and the related problem of lack of documentation. I remember what I was trying to build at the time,
    // but after a few months, it is no longer possible to reconstruct the story behind the code.
    // This emphasizes the importance of proper documentation!
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main(void)
    // algoritm will ask a volatiliy value then 
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    int x,min,max;
    int test,volIntMedian,volVariation;
    float result,vol,startPreis,preis;

    printf("Starting Preis: xx.xx fORMAT\n ");
    fflush(stdin);
    scanf("%f",&startPreis);

    printf("Volatility? only one decimal please ");
    fflush(stdin);
    scanf("%f",&vol);

    volIntMedian=1000;
    volVariation=vol*10;

    min=volIntMedian-volVariation;
    max=volIntMedian+volVariation;

    printf("\n\n");

    printf("min: %d\t",min);
    printf("max: %d",max);

    printf("\n\n");

    srand(time(NULL));
    rand();

    /*
    // allgemeiner Zahlenbereich beispiel mit85 und 115 (vol 1.5%) float 

        printf("Allgemein in einem Bereich von a bis b(float)\n");
    for (int i = 0; i < 100; i++)
    {
        test = rand() % (115 - 85 + 1) + 85;
        // printf("%.d | ", test);
        if (test>=100)
        {
        result= (float)test/100;
        } else
        {
            result=((float)test-100)/10;
        }
        
        printf("%.2f | ", result);
    }
    printf("\n\n");
    */

    // allgemeiner Zahlenbereich beispiel mit gefragte vol. 

    printf("Bereich ist bei dei gegebene Volatilität definiert (float)\n");
    for (int i = 0; i < 50; i++)
    {
        test = rand() % (max - min + 1) + min;

            result=((float)test-volIntMedian)/10;
             
            startPreis=(startPreis*(result/100))+startPreis;

            printf("%.1f | %.2f \n", result,startPreis);
    }
    printf("\n\n");
    system("pause");
}
