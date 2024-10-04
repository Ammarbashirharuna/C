#include <stdio.h>
int main()
{
    int x = 30;
    int y = 40;
    int combine = x + y;
    printf("%d", combine);

    int bread;
    int milk;
    printf("\nplease enter the item you have buy today so that you can track you wallet ");
    printf("\nAmountof bread cost? ");
    scanf("%d", &bread);
    // second item
    printf("amount of milk cost? ");
    scanf("%d", &milk);
    int total = bread + milk;
    printf("Hello sir The total amount of your cost is %d", total);
}