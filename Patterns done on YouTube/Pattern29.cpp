/*

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 **4 3 2 1 
1 2 3 ****3 2 1 
1 2 ******2 1 
1 ********1 

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

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        for (int k = 2; k <= i; k++)
        {

            cout << "**";
        }

        int count = n - i + 1;
        for (int l = 1; l <= n - i + 1; l++)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }

    return 0;
}