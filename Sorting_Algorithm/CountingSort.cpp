#include <iostream>
using namespace std;

void countingsort(int *arr,int n)
{   
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
    }
    int freq[max + 1];
    for (int i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
       freq[arr[i]]++;
    }
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (freq[i] > 0) {
            arr[index] = i;
            index++;
            freq[i]--; // decrease count after placing number
        }
    }
    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int C[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> C[i];
    }
    countingsort(C,n);
  return 0;
}