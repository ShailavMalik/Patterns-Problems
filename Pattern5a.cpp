/*

******
*   *
*  *
* *
**

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

        // loop for printing first row and first column
        for (int j = 1; j <= n - i + 1; j++)
        {

            if (i == 1 || j == 1)
            {
                cout << "*";
            }
        }
        //This block prints remaining part (except for 1st row & 1st column)
        if (i != 1 && i != n)
        {
            // loop for printing spaces
            for (int k = 1; k <= n - i - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}