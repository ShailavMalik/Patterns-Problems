/*

1 
12
1  3
1    4
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
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j<<" ";
            }
        }
        else
        {
            cout << 1;
            for (int s = 1; s <= i - 2; s++)
            {
                cout << "  ";
            }
            cout << i;
        }
        cout << endl;
    }

    return 0;
}