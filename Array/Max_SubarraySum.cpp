#include <iostream>
#include <climits>
using namespace std;

void bruteforce(int *arr, int n);
void optimized(int *arr, int n);
void kadanesalg(int *arr, int n);
int main() 
{
    int n;
    cout << "No of element in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for(int i=0; i<n; i++)
    {
       cin >> arr[i];
    }
    bruteforce(arr,n);
    optimized(arr,n);
    kadanesalg(arr,n);
  return 0;
}
void bruteforce(int *arr, int n)
{
    int max = INT32_MIN;
    for(int start=0; start<n; start++)
    {
        for(int end=start; end<n; end++)
        {
            int sum = 0;
            for(int i=start; i<=end; i++)
            {
                sum+=arr[i];
            }
            cout << sum << ", ";
            if(sum>max)
            {
                max = sum;
            }
        }
        cout << endl;
    }
    cout << "The max sum is:(brute force)" << max << endl;
}
void optimized(int *arr, int n)
{
    int max = INT32_MIN;
    for(int start=0; start<n; start++)
    {
        int sum=0;
        for(int end=start; end<n; end++)
        {
            sum+=arr[end];
            if(sum>max)
            {
                max = sum;
            }
        }
    }
    cout << "The max sum is:(optimized)" << max << endl;
}
void kadanesalg(int *arr, int n)
{
    int max = INT32_MIN;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum>max)
        {
            max = sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout << "The max sum is:(kadanes)" << max << endl;
}