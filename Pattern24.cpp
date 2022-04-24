/*

1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count++;
            cout << count;

            // don't print star in end
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
        count = count - (n - i + 1);

        for (int j = 1; j <= n - i + 1; j++)
        {
            count++;
            cout << count;

            // don't print star in end
            if (j == n - i + 1)
            {
                break;
            }
            cout << "*";
        }

        count = count - (n - i+1);
        cout << endl;
    }

    return 0;
}