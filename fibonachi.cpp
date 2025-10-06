#include <iostream>
using namespace std;

int main() {
    int term1,term2,nextterm,n;
    cout<<"Enter the number of terms you want: "; cin >> n;
    term1=0;
    term2=1;
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if (n==2)
    {
        cout << "0 1" << endl;
        return 0;
    }
    cout << term1<< " " << term2;
    for(int i=0; i<n-2; i++)
    {
        nextterm = term1 + term2;
        term1 = term2;
        term2 = nextterm;
        cout << " " << nextterm;
    }
    cout << endl;
  return 0;
}