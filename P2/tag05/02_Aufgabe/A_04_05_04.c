#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
    int x;

    int i=0;
    int arr[11],hashwert;

    while(i<11)
        {
            printf("Geben Sie bitte die %d. Ziffer ein: ",i+1);
            fflush(stdin);
            scanf("%d",&arr[i]);

            if (arr[i]<0 || arr[i]>9)
            {
                continue;
            }

            i++;
                        
        }

        hashwert=(arr[0]-arr[1]+arr[2]-arr[3]+arr[4]-arr[5]+arr[6]-arr[7]+arr[8]-arr[9])%10;

        // printf("Hashwert ist: %d\n",hashwert);

                //printf("ziffer 11 ist: %d\n",arr[10]);

        if (hashwert==arr[10])
        {
            printf("Alles ok !");
        } else
        {
            printf("Leider unzülassig!");
        }

    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}