#include <iostream>
using namespace std;
int main()
{
    int row, col1, col2;
    for (row = 1; row <= 4; row++)
    {
        for (col1 = 1; col1 < row; col1++)
        {
            cout << " ";
        }
        for (col2 = 1; col2 <= 4 - (row - 1); col2++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
