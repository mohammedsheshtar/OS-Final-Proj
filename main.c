#include <stdio.h>
#include <string.h>
#include "deposit.h"
#include "withdraw.h"
#include "inquiry.h"
#include "transfer.h"
#include "create.h"
#include "close.h"


int main()
{
    printf("Hello World!\n");
    int a = deposit(100);
    int b = withdraw(100);

    printf("%d\n", a);
    printf("%d\n", b);
    
    create();
    close();
    transfer();
    inquiry();

    return 0;
}