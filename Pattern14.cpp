/*

12345
2  5
3 5
45
5

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
            for (int j = i; j <= n; j++)
            {
                cout << j;
            }
        }
        else
        {
            cout << i;
            for (int k = 1; k <= n - i - 1; k++)
            {
                cout << " ";
            }
            cout << n;
        }
        cout << endl;
    }

    return 0;
}