#include <stdio.h>
#include <string.h>


// bubblesort for int 

void bubblesortINT(int arr[], int x)

{
    for (int i = x; i >1; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            if (arr[j]>arr[j+1])            // compare each element of teh array with his folliwing 
            {
                int hilfe =arr[j];          // only if the following is bigger they swap places 
                arr[j]=arr[j+1];
                arr[j+1]=hilfe;
            }
            
        }
        
    }
    
}

// bubblesort char array 

void bubblesortSTRING(char arr[],int x)

{
    for (int i = x; i >1; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            if (arr[j]>arr[j+1])            // compare each element of teh array with his folliwing 
            {
                int hilfe =arr[j];          // only if the following is bigger they swap places 
                arr[j]=arr[j+1];
                arr[j+1]=hilfe;
            }
            
        }
        
    }
}

// bubblesort float

void bubblesortFloat(float arr[],int x)

{
    for (int i = x; i >1; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            if (arr[j]>arr[j+1])            // compare each element of teh array with his folliwing 
            {
                float hilfe =arr[j];          // only if the following is bigger they swap places 
                arr[j]=arr[j+1];
                arr[j+1]=hilfe;
            }
            
        }
        
    }
}

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");

    int arr[10] = {10,20,5,3,0,50,3,3,11,45};
    char text[6] = {'e','a','g','c','z','r'};
    float floatArray[7] = {5.3,5.0,2.3,1.6,8.9,6.9,4.3};
    

    bubblesortINT(&arr[0],10);

    for(int i=0;i<10;i++)
        {
            printf("arr[%d]=%d\n",i,arr[i]);
        }
    printf("\n\n\n\n");

    bubblesortSTRING(text,6);

        for(int i=0;i<6;i++)
        {
            printf("arr[%d]=%c\n",i,text[i]);
        }

    printf("\n\n\n\n");

    bubblesortFloat(floatArray,7);

    for(int i=0;i<7;i++)
        {
            printf("arr[%d]=%f\n",i,floatArray[i]);
        }

    printf("\n\n\n\n");
    system("pause");
    return 0;
}

