/*

1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1

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
        for (int j = 1; j <= i; j++)
        {
            cout << i;
            if (j == i)
            {
                break;
            }
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << n - i + 1;

            if (j == 1)
            {
                break;
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}