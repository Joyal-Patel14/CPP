#include <iostream>
using namespace std;

// Rows and columns should be sorted

int main()
{

    int row, col;
    cin >> row >> col;
    int key;
    cin >> key;

    int mat[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    int r = 0, c = col - 1;
    bool found = false;
    while (r < row and c >= 0)
    {
        if (mat[r][c] == key)
        {
            found = true;
        }

        if (mat[r][c] > key)
        {
            c--;
        }

        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
