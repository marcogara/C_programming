#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");
 
    int zahl; 
    char antwort, antwort1;

    do
    {
        printf("Geben Sie bitte eine Ganze Zahl ein: ");
        fflush(stdin);
        scanf("%d",&zahl);

        printf("\n");

        if (zahl <= 12 && zahl >=1)
        {
            switch (zahl)
            {
                case 1: printf("Januar"); break;
                case 2: printf("Februar"); break;
                case 3: printf("März"); break;
                case 4: printf("April"); break;
                case 5: printf("Mai");  break;
                case 6: printf("Juni");  break;
                case 7: printf("Juli"); break;
                case 8: printf("August"); break;
                case 9: printf("September");  break;
                case 10: printf("Oktober"); break;
                case 11: printf("November"); break;
                case 12: printf("Dezember");  break;     
            }
            
        }
        else
        {
            printf("Sind Sie Modulo Fan? (j/n): ");
            fflush(stdin);
            scanf("%c",&antwort1);

            if (antwort1=='j')
            {
                zahl=zahl%12;
                // printf("%d\n",zahl);
                if (zahl<0)
                {
                    zahl=zahl*-1;
                    // printf("%d\n",zahl);
                }
                
                switch (zahl)
                {
                    case 1: printf("Januar"); break;
                    case 2: printf("Februar"); break;
                    case 3: printf("März"); break;
                    case 4: printf("April"); break;
                    case 5: printf("Mai");  break;
                    case 6: printf("Juni");  break;
                    case 7: printf("Juli"); break;
                    case 8: printf("August"); break;
                    case 9: printf("September");  break;
                    case 10: printf("Oktober"); break;
                    case 11: printf("November"); break;
                    case 12: printf("Dezember");  break;       
                }
            } else
            {
                printf("Dann eben nicht\n");
            }
            
        }
        
        printf("\nWeiter gehen? (j/n): ");
        printf("\nWeiter gehen? (j/n): ");
        fflush(stdin);
        scanf("%c",&antwort);

        printf("\n");

    } while (antwort == 'j');

    printf("\n");
    
    printf("Ende des Programm\n");
    system("pause");

}