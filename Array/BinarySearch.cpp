#include <iostream>
using namespace std;

int binarysearch(int *a, int n, int key){
    int st=0, end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(a[mid]==key){
            cout << "The elements is on the " << mid+1 << " position"<< endl;
            exit(0);
        }
        if(a[mid]>key){
            end = mid-1;
        }
        if(a[mid]<key){
            st = mid + 1;
        }
    }
   cout << "The element doesnt exists" << endl;
   return 0;
}
int main() {
    int n;
    cout<< "Number of elements in array:";
    cin >> n;
    int a[n];
    cout << "Elements of array:";
    for(int i =0; i<n; i++){
      cin >> a[i];
    }
    int key;
    cout << "Enter the element you need to find:";
    cin >> key;
    binarysearch(a,n,key);
  return 0;
}