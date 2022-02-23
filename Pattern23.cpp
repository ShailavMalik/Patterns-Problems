/*

11111
 2222
  333
   44
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
        for (int s = 1; s <= i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}