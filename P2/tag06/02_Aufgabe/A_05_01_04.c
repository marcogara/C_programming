#include <stdio.h>
#include <windows.h>
#include <string.h>

void codiere(char text[],char stringA[], char stringB[])
{
    int i =0;

    while(text[i]!='\0' && text[i+1]!='\0')
    {
        stringA[i/2]=text[i];
        stringB[i/2]=text[i];
        i=i+2;
    }

    if (text[i]!='\0')          // falls die Schleife verlassen wurde, da bei text[i+1] der Terminator liegt 
    {
        stringA[i/2]=text[i];
        stringA[i/2+1]='\0';

    } else          // falls die Schleife verlassen wurde, da bei text[i] der Terminator liegt
    {
        stringB[i/2] = '\0';        
    }
    
    stringB[i/2] = '\0';
    
}

void decodiere(char text[], char stringA[], char stringB[])
{
    int i=0;

    while(stringA[i]!='\0' && stringB[i]!='\0')
    {
        text[2*i]=stringA[i];
        text[2*i+1]=stringB[i];
        i++;
    }

    if(stringA[i]!='\0') // Falls die Schleife verlassen wurde, da bei stringB[i] der Terminator liegt (stringA also um 1 Zeichen länger als stringB ist)
    {
        text[2*i]=stringA[i];
        text[2*i+1]='\0';
    }
    else // Falls die Schleife verlassen wurde, da bei stringA[i] der Terminator liegt (stringA also genauso lang wie stringB ist)
    {
        text[2*i]='\0';
    }
}



int main (void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");

    char text[101],stringA[51],stringB[51];

    strcpy(text,"Totaler Geheimtext psssst!");

    printf("text before coding: \"%s\"\n\n",text);

    codiere(text,stringA,stringB);
    printf("text codiert: \"  %s %s    \"\n\n",stringA,stringB);

    decodiere(text,stringA,stringB);

    printf("text nach dem decodierung: \" %s \" \n",text); 

    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
}