#include <stdio.h>
#include <string.h>
#include "deposit.h"
#include "withdraw.h"

int main()
{
    printf("Hello World!\n");
    int a = deposit(100);
    int b = withdraw(100);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}