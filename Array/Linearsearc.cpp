#include <iostream>
using namespace std;

int main() {
     int n,key;
    cout<< "Number of elements in array:";
    cin >> n;
    int a[n];
    cout << "Elements of array:";
    for(int i =0; i<n; i++){
      cin >> a[i];
    }
    cout << "Enter the element you want to find: ";
    cin >> key;
    for(int i=0; i<n; i++){
        if(a[i]==key){
            cout << "The element is on "<< i+1 << " position"<<endl;
            return 0; 
        }
    }
    cout << "The element is not found"<< endl;
  return 0;
}