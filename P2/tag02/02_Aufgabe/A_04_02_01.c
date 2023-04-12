#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
 
    int i,lotto[6];

    srand(time(NULL));
    rand();

    while(i<6)
    {
        int doublette=0;
        lotto [i]=rand()% 49+1;
            
            for(int j=0;j<i;j++)
            {
                if (lotto[i]==lotto[j])
                {
                    doublette=9;
                    break;
                }  
            }
            if (doublette==9)
            {
                continue;
            }
            i++;
        }
            for (int k = 0; k<6 ; k++)
        {
            printf("%d\t", lotto[k]);
        }

    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}

