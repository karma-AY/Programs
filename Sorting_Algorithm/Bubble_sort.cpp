#include <iostream>
using namespace std;

void buublesort(int *bub, int n)
{
    for(int i=0; i<n-1; i++)//loop for (n-1) turns
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(bub[j]>bub[j+1])
            {
                swap(bub[j], bub[j+1]);
            }
        }
    }
    cout << "The sorted array(ascending) is:\n ";
    for(int i=0; i<n; i++)
    {
        cout << bub[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int bub[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> bub[i];
    }
    buublesort(bub,n);
  return 0;
}