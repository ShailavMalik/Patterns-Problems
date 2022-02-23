/*

A B C 
D E F 
G H I 

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
            cout << char(j + (n * (i - 1)) + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}