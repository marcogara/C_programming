#include <stdio.h>


 int tausche(int* p1,int* p2)
{
  
*p1 =  *p1 ^ *p2 ;
*p2 = *p1 ^  *p2 ;
*p1 = *p1 ^  *p2 ;

}

int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);system("cls");

    int a;
    int b;

    printf("Geben sie ein Zahl ein: a = ");
    fflush(stdin);
    scanf("%d",&a);

    printf("Geben sie ein Zahl ein: b = ");
    fflush(stdin);
    scanf("%d",&b);

    tausche(&a,&b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("\n\n");
    
    printf("Ende des Programm\n");
    system("pause");
    
}