/*

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
1 6 15 20 15 6 1

*/

#include <iostream>
using namespace std;

// function to calculate nCr
int comb(int n, int r) // (5,3)
{
    if (n == 0 || r == 0)
    {
        return 1;
    }
    int count = n;
    for (int i = r - 1; i >= 1; i--) // 2
    {
        // denominator
        r = r * i;

        // numerator
        count--;
        n = n * count;
    }

    return n / r;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << comb(i, j)<<" ";  
        }
        cout << endl;
    }

    ////cout << comb(5, 2);

    return 0;
}