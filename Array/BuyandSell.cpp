#include <iostream>
using namespace std;
void maxprofit(int *price, int n)
{
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;   
    for(int i=1;i<n;i++)
    {
       bestbuy[i] = min(bestbuy[i-1],price[i-1]);
    }
    int maxprofit = 0;
    for(int i=0;i<n;i++)
    {
       int profit = price[i] - bestbuy[i];
       maxprofit = max(maxprofit,profit);
    }
    cout << "max profit = " << maxprofit << endl;
}
int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    cout<< "Enter the prices in order: ";
    int prices[n];
    for(int i=0;i<n;i++)
    {
        cin>> prices[i];
    }
    maxprofit(prices,n);
  return 0;
}