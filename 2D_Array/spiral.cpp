#include <iostream>
using namespace std;

void spiralm(int *mat, int n, int m)
{
    int sr = 0, sc = 0, er = n-1, ec = m-1;
    while(sr <= er && sc <= ec)
    {
        for(int i = sc; i <= ec; i++)
            cout << mat[sr*m + i] << " ";

        for(int j = sr+1; j <= er; j++)
            cout << mat[j*m + ec] << " ";

        if(sr != er)
            for(int k = ec-1; k >= sc; k--)
                cout << mat[er*m + k] << " ";

        if(sc != ec)
            for(int l = er-1; l >= sr+1; l--)
                cout << mat[l*m + sc] << " ";

        sr++; sc++; er--; ec--;
    }
}

int main()
{
    int row, col;
    cout << "Enter row and col: ";
    cin >> row >> col;

    int *mat = new int[row * col];

    cout << "Enter the elements of matrix:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> mat[i*col + j];

    spiralm(mat, row, col);

    delete[] mat;
    return 0;
}
