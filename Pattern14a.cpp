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
        int count = i + 'A' - 1;
        for (int j = 1; j <= n; j++)
        {
            cout << char(count) << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}