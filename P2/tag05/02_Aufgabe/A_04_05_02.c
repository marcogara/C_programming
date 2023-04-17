#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>




int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
    int x;

    int i,arr[10],hashwert;

    for(i=0;i<10;i++)
        {
            printf("Geben Sie bitte die %d. Ziifer ein: ",i+1);
            fflush(stdin);
            scanf("%d",&arr[i]);
            if (i==1)
            hashwert= (arr[0]*arr[1])%10;
            if(i>1)
            hashwert=(hashwert*arr[i])%10;
            
        }



        
        printf("Hashwert ist: %d",hashwert);


    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}
