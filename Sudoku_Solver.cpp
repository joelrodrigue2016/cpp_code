
#include <iostream>
#define J 9
using namespace std;

int grid[J][J] = {{2, 5, 0, 0, 3, 0, 9, 0, 1},
                  {0, 1, 0, 0, 0, 4, 0, 0, 0},
                  {4, 0, 7, 0, 0, 0, 2, 0, 8},
                  {0, 0, 5, 2, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 9, 8, 1, 0, 0},
                  {0, 4, 0, 0, 0, 3, 0, 0, 0},
                  {0, 0, 0, 3, 6, 0, 0, 7, 2},
                  {0, 7, 0, 0, 0, 0, 0, 0, 3},
                  {9, 0, 3, 0, 0, 0, 6, 0, 4}};

bool isInColumn(int column, int num)
{
    for (int row = 0; row < J; row++)
        if (grid[row][column] == num)
            return true;
    return false;
}

bool isInRow(int row, int num)
{
    for (int col = 0; col < J; col++)
        if (grid[row][column] == num)
            return true;
    return false;
}

bool isingrid(int gridStartrow, int gridStartColumn, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + gridStartrow][column + gridStartColumn] == num)
                return true;
    return false;
}

void sudokuSolver()
{
    for (int row = 0; row < N; row++)
    {
        for (int column = 0; column < N; column++)
        {
            if (column == 3 || col == 6)
                cout << "|";
            cout << grid[row][column] << " ";
        }
        if (row == 2 || row == 5)
        {
            cout << endl;
            for (int i = 0; i < N; i++)
                cout << "-*-*-";
        }
        cout << endl;
    }
}

bool unUsedSpaces(int &row, int &column)
{
    for (row = 0; row < N; row++)
        for (column = 0; column < N; column++)
            if (grid[row][column] == 0)
                return true;

    return false;
}

int main(int argc, char **argv)
{

    int M = 9;
    s cout << "M = " << M << endl;

    system("pause");
    return 0;
}
