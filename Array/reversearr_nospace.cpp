#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Number of elements in array:";
    cin >> n;
    int a[n];
    cout << "Elements of array:";
    for(int i =0; i<n; i++){
      cin >> a[i];
    }
    int start = 0, end = n-1;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start ++;
        end --;
    }
    cout << "The reverse of an array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
  return 0;
}