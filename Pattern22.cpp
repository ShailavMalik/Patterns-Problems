/*

3
44
555
6666
555
44
3

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
            cout << i + 2;
        }
        cout << endl;
    }

    for (int i = 1; i <= n-1 ; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << n + 2 - i;
        }
        cout << endl;
    }

    return 0;
}