#include <iostream>
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

void printCoins(int *coins, int *sum, int n)
{
    std::cout << "We choose coins ";
    for (int i = n - 1; i > 0; i = i - 2)
    {
        if (sum[i] == sum[i - 1])
        {
            i--;
        }
        std::cout << coins[i] << " ";
    }
    return;
}

void CRP(int *coins, int n)
{
    int sum[n];
    sum[0] = 0;
    sum[1] = coins[1];
    for (int i = 2; i < n; i++)
    {
        sum[i] = max(coins[i] + sum[i - 2], sum[i - 1]);
    }
    std::cout << "Largest value=" << sum[n - 1] << std::endl;
    printCoins(coins, sum, n);
    return;
}

int main()
{
    int n;
    std::cout << "Enter number of coins: ";
    std::cin >> n;
    n = n + 1;
    int coins[n];
    std::cout << "Enter value of coins" << std::endl;
    for (int i = 1; i < n; i++)
    {
        std::cin >> coins[i];
    }
    CRP(coins, n);
    return 0;
}