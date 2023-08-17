#include<iostream>
using namespace std;

int main()
{
    // Initialize an array of stock prices
    int arr[15] = { 7, 1, 5, 3, 6, 4 };
    // Initialize variables to track minimum price and maximum profit
    int minPrice = arr[0];
    int maxProfit = 0;
    int currentProfit;

    int buyDay = 0; // Day to buy
    int sellDay = 0; // Day to sell
    int buyPrice = 0; // Price at which to buy
    int sellPrice = 0; // Price at which to sell

    // Iterate through the array of stock prices
    for (int i = 0; i < 6; i++)
    {
        // Update the minimum price if a lower price is encountered
        if (arr[i] < minPrice)
        {
            minPrice = arr[i];
            buyDay = i;
            buyPrice = minPrice; // Update buy price
        }
        else
        {
            // Calculate the profit if selling at the current price
            currentProfit = arr[i] - minPrice;

            // Update the maximum profit if the current profit is higher
            if (currentProfit > maxProfit)
            {
                maxProfit = currentProfit;
                sellDay = i;
                sellPrice = arr[i];
            }
        }
    }

    // Display the maximum profit that can be obtained
    cout << "The max Profit is : " << maxProfit << endl;
    cout << "Buy Day: " << buyDay << " (Price: " << buyPrice << ")" << endl;
    cout << "Sell Day: " << sellDay << " (Price: " << sellPrice << ")" << endl;

    return 0;
}
