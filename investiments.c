#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double money;
    int years;
    int profit;

    printf("How much money are you investing? ");
    scanf("%f", &money);
    
    printf("For how many years are you investing? ");
    scanf("%d", &years);

    printf("How much is the yearly profit(In percentage)? ");
    scanf("%f", &profit);

    for (size_t i = 0; i < years; i++)
    {
        money == money + (money*(profit/100));
    }
    printf("%f", money);
    
    return 0;
}
