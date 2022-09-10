/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     // comment in C 
    printf("Hello World!\n");
    printf("It's really good!\n");
// /* for multi line comments */ 
    printf("1\t2\t3\t\n");

    // variable 
    printf("Let's see variable\n");
    int x; // declaration   
    x = 123; // initialization 
    int y = 321;                // datatypes 
    float gpa = 2.05; 
    char grade = 'B';
    char name[] = "Bro";      
    
    printf("%d\n",x);    // print variable x %d to print int 
  //  printf("your gpa is %d\n",gpa);
  printf("my name is %s\n",name);    // with %s you can print a string 
  printf("your avarage grade is %c\n",grade);  // %c to print char 
  printf("your gpa is %f\n",gpa);    // %f to print float 
    
        return 0;
}