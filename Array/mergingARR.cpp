#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter no. of elements in a: ";
    cin >> x;
    int a[x];
    cout << "Enter elements of a: ";
    for(int i=0; i<x; i++)
    {
        cin >> a[i];
    }

    int y;
    cout << "Enter no. of elements in b: ";
    cin >> y;
    int b[y];
    cout << "Enter elements of b: ";
    for(int i=0; i<y; i++)
    {
        cin >> b[i];
    } 

    int z = x+y;
    int c[z];
    for(int i=0; i<x; i++)
    {
        c[i] = a[i];
    }
    for(int i=x; i<z; i++)
    {
        c[i] = b[i-x];
    }
    for(int i=0; i<z; i++)
    {
        cout << c[i] << " " ; 
    }
    cout << endl;
    //uni que
    char ask;
    cout << "If you wanna edit the array(delete an element)[y/n]: ";
    cin >> ask;
    if(ask == 'y')
    {
    int del;
    cout << "Enter the number of elements that you wanna delete: ";
    cin >> del;
    int d[del];
    cout << "Enter the elements to delete: ";
    for(int i=0; i<del; i++)
    {
        cin >> d[i];
    }
    int position;
    for(int i=0; i<del; i++)
    {
        int key = d[i];
        for(int j=0; j<z; j++)
        {
            if(d[i]==c[j])
            {
                position = j;
                for(int k=position; k<z; k++)
                {
                    c[k] = c[k+1];
                }
                z--;
            }
        }
    }
    for(int i=0; i<z; i++)
    {
        cout<< c[i] << " ";
    }
    cout << endl;
    }
    else 
    {
        cout<<"Thank you";
    }
  return 0;
}
