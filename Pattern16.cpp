/*

A 
A B A 
A B C B A 
A B C D C B A 
A B C D E D C B A 

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
            cout << (char)(j + 'A' - 1) << " ";
        }
        for (int k = i - 1; k >= 1; k--)
        {
            cout << (char)(k + 'A' - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}