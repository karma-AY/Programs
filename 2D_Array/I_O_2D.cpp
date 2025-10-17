#include <iostream>
using namespace std;

int main() {
    //input of 2d array
    int row,col;
    cout << "Enter row and col: ";
    cin >> row >> col;
    int mat[row][col];
    cout << "Enter the elements of matrix:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }
  return 0;
}