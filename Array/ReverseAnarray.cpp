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
    int acopy[10];
    for(int i=0; i<n; i++){
        acopy[i]=a[n-i-1];
    }
    cout << "The reverse of an array is\n";
    for(int i=0; i<n; i++){
        cout << acopy[i] << " "<< endl;
    }
  return 0;
}