#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double money;
    int years;
    double profit;

    printf("How much money are you investing? ");
    scanf("%lf", &money);

    printf("For how many years are you investing? ");
    scanf("%d", &years);

    printf("How much is the yearly profit (in percentage)? ");
    scanf("%lf", &profit);

    for (size_t i = 0; i < years; i++)
    {
        money = money + (money * (profit / 100));
    }
    
    printf("Total money after %d years: %lf\n", years, money);

    return 0;
}
