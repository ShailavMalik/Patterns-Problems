/*

D 
C D 
B C D 
A B C D 

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
        int count = n - i + 1 + 'A' - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << char(count) << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}