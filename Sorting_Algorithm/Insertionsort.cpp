#include <iostream>
using namespace std;

void insertion(int *a, int n)
{
    for(int i=1; i<n; i++)
    {
        int cur = a[i];
        int prev = i-1;
        while(prev>=0 && a[prev]>cur)
        {
            swap(a[prev],a[prev+1]);
            prev--;
        }
        a[prev+1]=cur;
    }
    for(int i=0; i<n; i++)
    {
        cout << " " << a[i];
    }
}
int main() {
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int I[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> I[i];
    }
    insertion(I,n);
  return 0;
}