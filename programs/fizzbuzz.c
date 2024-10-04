#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number ");
    scanf("%d", number);
    if ("%d", number % 5 == 0 && "%d", number % 3 == 0)
    {
        printf("fizz Buzz");
    }
    else if ("%d", number % 5 == 0)
    {
        printf("fizz");
    }
    else if ("%d", number % 3 == 0)
    {
        printf("Buzz");
    }

    else
    {
        printf("opps am sorry men i can't read this number try again");
    }
}