/*

A B C 
B C D 
C D E

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
        for (int j = 1; j <= n; j++)
        {
            cout << char(i + j - 1 + 'A' - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}