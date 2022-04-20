/*

   1
  121
 12321
1234321

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
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        int count = i - 1;
        for (int k = 1; k <= i - 1; k++)
        {
            cout << count;
            count--;
        }
        cout << endl;
    }

    return 0;
}