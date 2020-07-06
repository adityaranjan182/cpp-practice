/*The cost of a stock on each day is given in an array, find the max profit 
that you can make by buying and selling in those days. For example, if the
given array is {100, 180, 260, 310, 40, 535, 695}, the maximum profit can 
earned by buying on day 0, selling on day 3. Again buy on day 4 and sell on 
day 6. If the given array of prices is sorted in decreasing order, then 
profit cannot be earned at all.
*/
#include <iostream>

//naive solution

int max_profit1(int price[], int start, int end)
{
    if (end <= start)
        return 0;
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (price[j] > price[i])
            {
                int curr_profit = (price[j] - price[i]) + max_profit1(price, start, i - 1) + max_profit1(price, j + 1, end);
                profit = std::max(profit, curr_profit);
            }
        }
    }
    return profit;
}

//efficient approach

int max_profit2(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
            profit += (price[i] - price[i - 1]);
    }
    return profit;
}
int main()
{
    int arr[] = {1, 5, 3, 8, 12};
    std::cout << max_profit1(arr, 0, 4) << "\n";
    std::cout << max_profit2(arr, 5);
    return 0;
}