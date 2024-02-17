#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    const int r = 3;
    const int c = 5;
    double avg;

    double array[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            array[i][j] = rand()%500;
        }
    }
    cout << "Array output." << endl;
    cout << "---------------------" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;

    for (int i = 0; i < r - 1; i++)
    {
        for (int j = 0; j < c - 1; j++)
        {
            avg = (array[i][j] + array[i + 1][j + 1]) / (r * c);
        }
    }
    cout << "Average: " << avg << endl;
}
