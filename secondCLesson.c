/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//   https://www.youtube.com/watch?v=BSaF8KxnoLY


#include <stdio.h>

int main()
{
    char* receiver[256];   
    char* greeting = "sehr geehrter";
    int gender = 2;
        int attachments = 2; 
    /*
       char* you can initialize a String 
       [256] i can allocate memory for the entry of the String ex: Frau Müller
       */

    printf("An wen ist der Brief gerichtet? ");
     scanf("%[^\n]",&receiver);
     
    printf("Ich schreibew an (1) Eine Frau (2) Einen Mann \n");
        scanf("%d)",&gender);
        
        if(gender==1) {
            greeting = "Sehr geehrte";
        }
        

    printf("%s %s,\n\n",greeting, receiver);
    printf("Hiermit übermittel ich ihnen die notwendigen Papiere.\n\n");
    
    printf("Anhänge: %d",attachments);
    

    return 0;
}