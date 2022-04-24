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

        for (int j = 1; j <= i; j++)
        { // prints 1st column and last row
            if (j == 1 || i == n)
            {
                cout << "* ";
            }
        }
        if (i != 1 && i != n)
        {
            // loop for printing spaces in between pyramid
            for (int k = 1; k <= i - 2; k++)
            {
                cout << "  ";
            }
            cout << "*";
        }
        // after each row
        cout << endl;
    }

    return 0;
}