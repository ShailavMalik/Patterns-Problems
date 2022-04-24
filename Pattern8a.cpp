/*

     *
    * *
   *   *
  *     *
 *       *
* * * * * *

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
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        if (i == 1 || i == n)
        {
            // loop for printing 1st and last column
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        // block for printing remaining rows
        else
        {
            cout << "* ";
            for (int k = 1; k <= i - 2; k++)
            {
                // loop for printing spaces in between pyramid
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}