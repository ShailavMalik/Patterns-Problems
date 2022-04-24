/*

******
*   *
*  *
* *
**
*

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            // loop for printing first and last row
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "*";
            }
        }
        // This block print remaining rows (i.e, rows except 1st and last)
        else
        {
            cout << "*";
            // loop for printing spaces
            for (int k = 1; k <= n - i - 1; k++)
            {
                cout << " ";
            }

            cout << "*";
        }
        // after each row
        cout << endl;
    }

    return 0;
}