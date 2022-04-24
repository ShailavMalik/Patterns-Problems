/*

    1
   1 2
  1   3
 1     4
1 2 3 4 5

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
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            cout << 1 << " ";
            for (int k = 1; k <= i - 2; k++)
            {
                cout << "  ";
            }
            cout << i;
        }

        cout << endl;
    }

    return 0;
}