#include <iostream>
using namespace std;

void selectionsort(int*sel, int n)
{
    for(int i=0; i<n-1; i++)
    {
       int minind = i;
       for(int j=i+1; j<n; j++)
       {
           if(sel[j]<sel[minind])
           {
               minind = j;
           }
       } 
         swap(sel[i],sel[minind]);
    }
    cout << "The sorted array(ascending) is:\n ";
    for(int i=0; i<n; i++)
    {
        cout << sel[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int sel[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> sel[i];
    }
    selectionsort(sel,n);
  return 0;
}