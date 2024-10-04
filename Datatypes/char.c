#include <stdio.h>
int main()
{   char schoolNam[100];
    char name[100];
    char myName[100] = "Amarbashir";
    printf("%s", myName);

   
    printf("\nEnter your name !");
    scanf("%s", &name);
    printf("\nEnter your schoolname please !");
    scanf("%s", &schoolNam);

    printf("\nHello %s, Welcome to our campus it seems you are from %s, school", name, schoolNam);

}