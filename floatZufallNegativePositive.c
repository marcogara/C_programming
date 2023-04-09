#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
    
int main(void)
// algoritm will give a float betweet a range of -1.0 and 1.0 in  this case
// to modify th range change 110 and 90
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");
    
    int x;
    int test;
    float result;

    srand(time(NULL));
    rand();

    // allgemeiner Zahlenbereich von a bis b float 

        printf("Allgemein in einem Bereich von a bis b(float)\n");
    for (int i = 0; i < 100; i++)
    {
        test = rand() % (110 - 90 + 1) + 90;
        // printf("%.d | ", test);

                    result=((float)test-100)/10;
                    printf("%.1f | ", result);
/*

        if (test>100)
        {
            result= ((float)test-100)/10;
        } if (test==100);
        {
            result= (float)test/100-1;
        } if (test<100)
        {
            result=((float)test-100)/10;
        }
        
        
        printf("%.1f | ", result);
        */
    }

    printf("\n\n");
    system("pause");
}