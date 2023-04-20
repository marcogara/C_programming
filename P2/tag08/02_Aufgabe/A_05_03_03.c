#include <stdio.h>
#include <string.h>

// Quicksort for int 

int sortiereINT(int arr[], int links, int rechts)

{
    int pivot=arr[links];
    int i = links+1;
    int j = rechts; 

    while(i<j)
    {

        while(i<rechts && arr[i]< pivot) i++;
        while (j>links && arr[j]>=pivot) j--;

        if (i<j)
        {
            arr[i] =        arr[i] ^ arr[j];
            arr[j] =        arr[i] ^ arr[j];
            arr[i] =        arr[i] ^ arr[j];
        }

    }
    if (arr[j]<pivot)
    {
        arr[j] =        arr[j] ^ arr[links];
        arr[links] =    arr[j] ^ arr[links];
        arr[j] =        arr[j] ^ arr[links];
    }

    return j;
    
}

void quicksortINT(int arr[], int links, int rechts)

{
        if (links<rechts)
        {
            int pivotEndposition = sortiereINT(arr,links,rechts);
            quicksortINT(arr,links,pivotEndposition-1);
            quicksortINT(arr,pivotEndposition+1,rechts);
        }
        
}

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");

    int arr[10] = {10,20,5,3,0,50,3,3,11,45};
   
    quicksortINT(arr,0,9);

    for(int i=0;i<10;i++)
        {
            printf("arr[%d]=%d\n",i,arr[i]);
        }


    printf("\n\n\n\n");
    system("pause");
    return 0;
}

