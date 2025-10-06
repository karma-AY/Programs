#include <iostream>
using namespace std;

void subarray(int *arr, int n);
int main() {
    int n;
    cout << "No of element in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for(int i=0; i<n; i++)
    {
       cin >> arr[i];
    }
    cout << "The subarray of array is :\n";
    subarray(arr,n);
  return 0;
}
void subarray(int *arr, int n)
{
    //for start loop
    for(int start=0; start<n; start++)
    {
        for(int end=start; end<n; end++)
        {
            for(int i=start; i<=end; i++)//for printing the elements
            {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}